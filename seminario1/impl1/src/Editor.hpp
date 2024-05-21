#ifndef Editor_hpp
#define Editor_hpp

#include <stack>
#include <string>
#include "TextArea.hpp"

class Editor {
    private:
        std::stack<TextArea::Memento*> stateHistory;
        TextArea* textArea;
    public:
        Editor();
        void write(std::string aText);
        void undo();
        std::string getText();
};

#endif