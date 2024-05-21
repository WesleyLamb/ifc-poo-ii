#include "Editor.hpp"
#include <iostream>
#include <string>

Editor::Editor()
{
    this->textArea = new TextArea();
}

void Editor::write(std::string aText)
{
    this->stateHistory.push(textArea->takeSnapshot());
    this->textArea->setText(aText);
}

void Editor::undo()
{
    this->textArea->restore(stateHistory.top());
    this->stateHistory.pop();
}

std::string Editor::getText()
{
    return this->textArea->getText();
}
