/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/InputContainer1Base.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

InputContainer1Base::InputContainer1Base()
{
    setWidth(72);
    setHeight(67);

    TextInput.setPosition(7, 10, 57, 51);
    TextInput.setColor(touchgfx::Color::getColorFrom24BitRGB(31, 158, 35));
    TextInput.setLinespacing(0);
    Unicode::snprintf(TextInputBuffer, TEXTINPUT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID23).getText());
    TextInput.setWildcard(TextInputBuffer);
    TextInput.setTypedText(touchgfx::TypedText(T_SINGLEUSEID22));

    add(TextInput);
}

void InputContainer1Base::initialize()
{
	
}