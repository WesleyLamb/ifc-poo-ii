#ifndef TextArea_hpp
#define TextArea_hpp

#include <string>

class TextArea {
    private:
        std::string text;
    public:
        class Memento {
            private:
                friend class TextArea;

                std::string savedText;

                Memento(std::string aTextToSave);
                std::string getSavedText();
        };

        void setText(std::string aText);
        std::string getText();

        TextArea::Memento* takeSnapshot();
        void restore(Memento* aMemento);
};



#endif