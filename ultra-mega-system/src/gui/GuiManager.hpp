#ifndef GuiManager_hpp
#define GuiManager_hpp

#include "imgui/imgui.h"
#include "imgui/imgui_impl_vulkan.h"
#include <vulkan/vulkan.h>

class GuiManager {
    private:
        static void exceptionCallback(int error, const char* description);
        static void check_vk_result(VkResult err);

        void SetupVulkan(ImVector<const char*> instance_extensions);
        bool IsExtensionAvailable(const ImVector<VkExtensionProperties>& properties, const char* extension);
        VkPhysicalDevice SetupVulkan_SelectPhysicalDevice();
        void SetupVulkanWindow(ImGui_ImplVulkanH_Window* wd, VkSurfaceKHR surface, int width, int height);
        void FrameRender(ImGui_ImplVulkanH_Window* wd, ImDrawData* draw_data);
        void FramePresent(ImGui_ImplVulkanH_Window* wd);
        void CleanupVulkanWindow();
        void CleanupVulkan();

    protected:
        GuiManager();
        static GuiManager* _instance;
    public:
        GuiManager(GuiManager &other) = delete;
        void operator=(const GuiManager &) = delete;

        static GuiManager* getInstance();

        static VkAllocationCallbacks*   g_Allocator;
        static VkInstance               g_Instance;
        static VkPhysicalDevice         g_PhysicalDevice;
        static VkDevice                 g_Device;
        static uint32_t                 g_QueueFamily;
        static VkQueue                  g_Queue;
        static VkDebugReportCallbackEXT g_DebugReport;
        static VkPipelineCache          g_PipelineCache;
        static VkDescriptorPool         g_DescriptorPool;

        static ImGui_ImplVulkanH_Window g_MainWindowData;
        static int                      g_MinImageCount;
        static bool                     g_SwapChainRebuild;
};

#endif