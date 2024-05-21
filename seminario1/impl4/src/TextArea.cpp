#include "TextArea.hpp"

#include <string>

TextArea::Memento::Memento(std::string aTextToSave) {
    this->savedText = aTextToSave;
}

std::string TextArea::Memento::getSavedText()
{
    return this->savedText;
}

TextArea::Memento *TextArea::takeSnapshot()
{
    Memento* memento = new TextArea::Memento(this->text);
    return memento;
}

void TextArea::setText(std::string aText)
{
    if (this->text != "")
        this->text += " ";
    this->text += aText;
}

std::string TextArea::getText()
{
    return this->text;
}

void TextArea::restore(Memento *aMemento)
{
    this->text = aMemento->getSavedText();
}
