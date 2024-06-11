#ifndef GuiManager_hpp
#define GuiManager_hpp

#include "imgui/imgui.h"
#include "imgui/imgui_impl_vulkan.h"
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include "forms/Form.hpp"

class FormManager {
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

        Form *formPrincipal;

    protected:
        ImGui_ImplVulkanH_Window* _wd;
        VkAllocationCallbacks*   _allocator = nullptr;
        VkInstance               _vkInstance = VK_NULL_HANDLE;
        VkPhysicalDevice         _physicalDevice = VK_NULL_HANDLE;
        VkDevice                 _device = VK_NULL_HANDLE;
        uint32_t                 _queueFamily = (uint32_t)-1;
        VkQueue                  _queue = VK_NULL_HANDLE;
        VkDebugReportCallbackEXT _debugReport = VK_NULL_HANDLE;
        VkPipelineCache          _pipelineCache = VK_NULL_HANDLE;
        VkDescriptorPool         _descriptorPool = VK_NULL_HANDLE;

        ImGui_ImplVulkanH_Window _mainWindowData;
        int                      _minImageCount = 2;
        bool                     _swapChainRebuild = false;
        GLFWwindow*              _window = nullptr;
        FormManager();
        static FormManager* _instance;
    public:
        FormManager(FormManager &other) = delete;
        void operator=(const FormManager &) = delete;

        void show();
        void close();

        static FormManager* getInstance();


};

#endif