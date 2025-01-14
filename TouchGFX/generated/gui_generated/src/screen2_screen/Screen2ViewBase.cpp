/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Screen2ViewBase::Screen2ViewBase() :
    buttonCallback(this, &Screen2ViewBase::buttonCallbackHandler),
    interactionPrepareNextEndedCallback(this, &Screen2ViewBase::interactionPrepareNextEndedCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_OBOI_ID));

    analogClock1.setXY(120, 19);
    analogClock1.setBackground(BITMAP_DARK_CLOCKS_BACKGROUNDS_CLOCK_CLASSIC_BACKGROUND_ID, 116, 116);
    analogClock1.setupSecondHand(BITMAP_DARK_CLOCKS_HANDS_CLOCK_CLASSIC_SECOND_HAND_ID, 4, 79);
    analogClock1.setupMinuteHand(BITMAP_DARK_CLOCKS_HANDS_CLOCK_CLASSIC_MINUTE_HAND_ID, 2, 64);
    analogClock1.setMinuteHandSecondCorrection(false);
    analogClock1.setupHourHand(BITMAP_DARK_CLOCKS_HANDS_CLOCK_CLASSIC_HOUR_HAND_ID, 2, 44);
    analogClock1.setHourHandMinuteCorrection(false);
    analogClock1.initializeTime24Hour(10, 10, 0);
    analogClock1.setAnimation(30, touchgfx::EasingEquations::backEaseOut);
    analogClock1.setVisible(false);

    digitalClock1.setPosition(86, 69, 308, 143);
    digitalClock1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    digitalClock1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID44));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    digitalClock1.setTime24Hour(10, 10, 0);
    digitalClock1.setVisible(false);

    buttonSettings.setXY(410, 9);
    buttonSettings.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_SETTINGS_32_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_SETTINGS_32_ID));
    buttonSettings.setIconXY(14, 14);
    buttonSettings.setAction(buttonCallback);

    ButPowerOn.setXY(11, 199);
    ButPowerOn.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_PO_ID), touchgfx::Bitmap(BITMAP_PO_ID));
    ButPowerOn.setIconXY(5, 5);
    ButPowerOn.setAction(buttonCallback);

    add(box1);
    add(image1);
    add(analogClock1);
    add(digitalClock1);
    add(buttonSettings);
    add(ButPowerOn);
}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::interactionPrepareNextEndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::ButtonWithIcon>& comp)
{
    //GoToMain
    //When InteractionPrepareNext completed change screen to Main
    //Go to Main with screen transition towards East
    application().gotoMainScreenCoverTransitionEast();
}

void Screen2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonSettings)
    {
        //ChangeToScreen1
        //When buttonSettings clicked change screen to Screen1
        //Go to Screen1 with screen transition towards South
        application().gotoScreen1ScreenSlideTransitionSouth();
    }
    else if (&src == &ButPowerOn)
    {
        //PowerOnPrepare
        //When ButPowerOn clicked call virtual function
        //Call PowerOnPrepare
        PowerOnPrepare();

        //InteractionPrepareNext
        //When PowerOnPrepare completed fade ButPowerOn
        //Fade ButPowerOn to alpha:0 with LinearIn easing in 2000 ms (120 Ticks)
        ButPowerOn.clearFadeAnimationEndedAction();
        ButPowerOn.startFadeAnimation(0, 120, touchgfx::EasingEquations::linearEaseIn);
        ButPowerOn.setFadeAnimationEndedAction(interactionPrepareNextEndedCallback);
    }
}
