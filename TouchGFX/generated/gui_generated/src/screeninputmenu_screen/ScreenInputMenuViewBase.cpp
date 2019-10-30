/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screeninputmenu_screen/ScreenInputMenuViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ScreenInputMenuViewBase::ScreenInputMenuViewBase() :
    buttonCallback(this, &ScreenInputMenuViewBase::buttonCallbackHandler),
    radioButtonSelectedCallback(this, &ScreenInputMenuViewBase::radioButtonSelectedCallbackHandler)
{
    tiledImage1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_TEXTURES_CARBON_FIBRE_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(0, 0);

    InternalBut.setXY(41, 22);
    InternalBut.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    InternalBut.setSelected(true);
    InternalBut.setDeselectionEnabled(false);

    ButInput_1.setXY(41, 78);
    ButInput_1.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    ButInput_1.setSelected(false);
    ButInput_1.setDeselectionEnabled(false);

    ButInput_2.setXY(41, 136);
    ButInput_2.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    ButInput_2.setSelected(false);
    ButInput_2.setDeselectionEnabled(false);

    ButInput_3.setXY(41, 193);
    ButInput_3.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_INACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_ACTIVE_ID), touchgfx::Bitmap(BITMAP_DARK_RADIO_BUTTONS_RADIO_ROUND_BUTTON_NORMAL_ID));
    ButInput_3.setSelected(false);
    ButInput_3.setDeselectionEnabled(false);

    buttonBack.setXY(404, 193);
    buttonBack.setBitmaps(touchgfx::Bitmap(BITMAP_IC_ID), touchgfx::Bitmap(BITMAP_IC_ID));
    buttonBack.setAction(buttonCallback);

    box1.setPosition(393, 0, 87, 32);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(43, 39, 39));

    textArea1.setXY(400, 0);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(69, 250, 121));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID28));

    textArea2.setXY(112, 32);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID29));

    textArea2_1.setXY(112, 88);
    textArea2_1.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID30));

    textArea2_1_1.setXY(112, 146);
    textArea2_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2_1_1.setLinespacing(0);
    textArea2_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID31));

    textArea2_1_2.setXY(113, 203);
    textArea2_1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(171, 171, 171));
    textArea2_1_2.setLinespacing(0);
    textArea2_1_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID32));

    add(tiledImage1);
    add(InternalBut);
    add(ButInput_1);
    add(ButInput_2);
    add(ButInput_3);
    add(buttonBack);
    add(box1);
    add(textArea1);
    add(textArea2);
    add(textArea2_1);
    add(textArea2_1_1);
    add(textArea2_1_2);
    radioButtonGroup1.add(InternalBut);
    radioButtonGroup1.add(ButInput_1);
    radioButtonGroup1.add(ButInput_2);
    radioButtonGroup1.add(ButInput_3);
    radioButtonGroup1.setRadioButtonSelectedHandler(radioButtonSelectedCallback);
}

void ScreenInputMenuViewBase::setupScreen()
{

}

void ScreenInputMenuViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonBack)
    {
        //InteractionToMenu
        //When buttonBack clicked change screen to Main
        //Go to Main with screen transition towards North
        application().gotoMainScreenSlideTransitionNorth();
    }
}

void ScreenInputMenuViewBase::radioButtonSelectedCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &InternalBut)
    {
        //InterButInt
        //When InternalBut selected call virtual function
        //Call FunInterButInt
        FunInterButInt();
    }
    else if (&src == &ButInput_1)
    {
        //InterBut1
        //When ButInput_1 selected call virtual function
        //Call FunInterBut1
        FunInterBut1();
    }
    else if (&src == &ButInput_2)
    {
        //InterBut2
        //When ButInput_2 selected call virtual function
        //Call FunInterBut2
        FunInterBut2();
    }
    else if (&src == &ButInput_3)
    {
        //InterBut3
        //When ButInput_3 selected call virtual function
        //Call FunInterBut3
        FunInterBut3();
    }
}