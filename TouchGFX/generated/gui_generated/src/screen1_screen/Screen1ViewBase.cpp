/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{
    tiledImage1.setBitmap(touchgfx::Bitmap(BITMAP_UZORY_SINIY_ZAVITUSHKI_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    box2.setPosition(80, 35, 97, 96);
    box2.setColor(touchgfx::Color::getColorFrom24BitRGB(4, 4, 28));
    box2.setAlpha(100);

    box2_1.setPosition(303, 35, 97, 96);
    box2_1.setColor(touchgfx::Color::getColorFrom24BitRGB(4, 4, 28));
    box2_1.setAlpha(100);

    textAreaHourCaption.setPosition(86, 46, 85, 24);
    textAreaHourCaption.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textAreaHourCaption.setLinespacing(0);
    textAreaHourCaption.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));

    textAreaHour.setPosition(88, 70, 83, 50);
    textAreaHour.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textAreaHour.setLinespacing(0);
    Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID3).getText());
    textAreaHour.setWildcard(textAreaHourBuffer);
    textAreaHour.setTypedText(touchgfx::TypedText(T_SINGLEUSEID2));

    textAreaMinuteCaption.setPosition(309, 46, 85, 24);
    textAreaMinuteCaption.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textAreaMinuteCaption.setLinespacing(0);
    textAreaMinuteCaption.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4));

    textAreaMinute.setPosition(310, 68, 83, 50);
    textAreaMinute.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textAreaMinute.setLinespacing(0);
    Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID6).getText());
    textAreaMinute.setWildcard(textAreaMinuteBuffer);
    textAreaMinute.setTypedText(touchgfx::TypedText(T_SINGLEUSEID5));

    buttonHourUp.setXY(184, 51);
    buttonHourUp.setBitmaps(touchgfx::Bitmap(BITMAP_UP_ARROW_ID), touchgfx::Bitmap(BITMAP_UP_ARROW_PRESSED_ID));
    buttonHourUp.setAction(buttonCallback);

    buttonHourDown.setXY(184, 93);
    buttonHourDown.setBitmaps(touchgfx::Bitmap(BITMAP_DOWN_ARROW_ID), touchgfx::Bitmap(BITMAP_DOWN_ARROW_PRESSED_ID));
    buttonHourDown.setAction(buttonCallback);

    buttonMinuteUp.setXY(266, 51);
    buttonMinuteUp.setBitmaps(touchgfx::Bitmap(BITMAP_UP_ARROW_ID), touchgfx::Bitmap(BITMAP_UP_ARROW_PRESSED_ID));
    buttonMinuteUp.setAction(buttonCallback);

    buttonMinuteDown.setXY(266, 93);
    buttonMinuteDown.setBitmaps(touchgfx::Bitmap(BITMAP_DOWN_ARROW_ID), touchgfx::Bitmap(BITMAP_DOWN_ARROW_PRESSED_ID));
    buttonMinuteDown.setAction(buttonCallback);

    buttonSave.setXY(80, 172);
    buttonSave.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_ROUND_ID), touchgfx::Bitmap(BITMAP_BTN_ROUND_PRESSED_ID));
    buttonSave.setLabelText(touchgfx::TypedText(T_SINGLEUSEID7));
    buttonSave.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(66, 66, 66));
    buttonSave.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(166, 166, 166));
    buttonSave.setAction(buttonCallback);

    buttonClock.setXY(303, 172);
    buttonClock.setBitmaps(touchgfx::Bitmap(BITMAP_BTN_ROUND_ID), touchgfx::Bitmap(BITMAP_BTN_ROUND_PRESSED_ID));
    buttonClock.setLabelText(touchgfx::TypedText(T_SINGLEUSEID9));
    buttonClock.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(66, 66, 66));
    buttonClock.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(166, 166, 166));
    buttonClock.setAction(buttonCallback);

    add(tiledImage1);
    add(box2);
    add(box2_1);
    add(textAreaHourCaption);
    add(textAreaHour);
    add(textAreaMinuteCaption);
    add(textAreaMinute);
    add(buttonHourUp);
    add(buttonHourDown);
    add(buttonMinuteUp);
    add(buttonMinuteDown);
    add(buttonSave);
    add(buttonClock);
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonHourUp)
    {
        //HourUpButtonIsClicked
        //When buttonHourUp clicked call virtual function
        //Call buttonHourUpClicked
        buttonHourUpClicked();
    }
    else if (&src == &buttonHourDown)
    {
        //HourDownButtonIsClicked
        //When buttonHourDown clicked call virtual function
        //Call buttonHourDownClicked
        buttonHourDownClicked();
    }
    else if (&src == &buttonMinuteUp)
    {
        //MinuteUpButtonIsClicked
        //When buttonMinuteUp clicked call virtual function
        //Call buttonMinuteUpClicked
        buttonMinuteUpClicked();
    }
    else if (&src == &buttonMinuteDown)
    {
        //MinuteDownButtonIsClicked
        //When buttonMinuteDown clicked call virtual function
        //Call buttonMinuteDownClicked
        buttonMinuteDownClicked();
    }
    else if (&src == &buttonSave)
    {
        //SaveButtonIsClicked
        //When buttonSave clicked call virtual function
        //Call buttonSaveClicked
        buttonSaveClicked();
    }
    else if (&src == &buttonClock)
    {
        //ChangeToScreen2
        //When buttonClock clicked change screen to Screen2
        //Go to Screen2 with screen transition towards North
        application().gotoScreen2ScreenCoverTransitionNorth();
    }
}
