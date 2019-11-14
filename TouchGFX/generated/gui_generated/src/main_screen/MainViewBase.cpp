/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler),
    interactionPreOffNextEndedCallback(this, &MainViewBase::interactionPreOffNextEndedCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    tiledImage1.setBitmap(touchgfx::Bitmap(BITMAP_ABSTRAKTSIIA_ZOLOTAIA_FANTAZIIA_SFERA_LINII_FRAKTALY_FON_ID));
    tiledImage1.setPosition(0, 0, 480, 272);
    tiledImage1.setOffset(21, 0);

    boxWithBorder1_1.setPosition(7, 194, 183, 68);
    boxWithBorder1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(1, 4, 18));
    boxWithBorder1_1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(3, 80, 94));
    boxWithBorder1_1.setBorderSize(5);

    boxWithBorder3.setPosition(7, 7, 149, 55);
    boxWithBorder3.setColor(touchgfx::Color::getColorFrom24BitRGB(1, 4, 18));
    boxWithBorder3.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(3, 80, 94));
    boxWithBorder3.setBorderSize(5);

    digitalClock1.setPosition(20, 9, 125, 54);
    digitalClock1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 252, 252));
    digitalClock1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID27));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    digitalClock1.setTime24Hour(10, 10, 0);

    boxWithBorder2.setPosition(292, 62, 69, 110);
    boxWithBorder2.setColor(touchgfx::Color::getColorFrom24BitRGB(1, 4, 18));
    boxWithBorder2.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(3, 80, 94));
    boxWithBorder2.setBorderSize(5);

    ButVolUP.setXY(302, 71);
    ButVolUP.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_ICONS_UP_ARROW_48_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_UP_ARROW_48_ID));
    ButVolUP.setDelay(30);
    ButVolUP.setInterval(12);
    ButVolUP.setAction(buttonCallback);

    ButVolDown.setXY(302, 138);
    ButVolDown.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_ICONS_DOWN_ARROW_48_ID), touchgfx::Bitmap(BITMAP_DARK_ICONS_DOWN_ARROW_48_ID));
    ButVolDown.setDelay(30);
    ButVolDown.setInterval(12);
    ButVolDown.setAction(buttonCallback);

    boxWithBorder1.setPosition(361, 62, 116, 109);
    boxWithBorder1.setColor(touchgfx::Color::getColorFrom24BitRGB(1, 4, 18));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(217, 114, 7));
    boxWithBorder1.setBorderSize(5);

    textVolume.setXY(368, 68);
    textVolume.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textVolume.setLinespacing(0);
    Unicode::snprintf(textVolumeBuffer, TEXTVOLUME_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID35).getText());
    textVolume.setWildcard(textVolumeBuffer);
    textVolume.resizeToCurrentText();
    textVolume.setTypedText(touchgfx::TypedText(T_SINGLEUSEID34));

    circleProgressFAN2.setXY(227, 7);
    circleProgressFAN2.setProgressIndicatorPosition(0, 0, 54, 54);
    circleProgressFAN2.setRange(0, 100);
    circleProgressFAN2.setCenter(27, 27);
    circleProgressFAN2.setRadius(20);
    circleProgressFAN2.setLineWidth(10);
    circleProgressFAN2.setStartEndAngle(0, 360);
    circleProgressFAN2.setCapPrecision(180);
    circleProgressFAN2.setBackground(touchgfx::Bitmap(BITMAP_DARK_PROGRESSINDICATORS_BG_SMALL_CIRCLE_INDICATOR_BG_LINE_FULL_ID));
    circleProgressFAN2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(49, 105, 41));
    circleProgressFAN2.setPainter(circleProgressFAN2Painter);
    circleProgressFAN2.setValue(0);

    circleProgressFAN1.setXY(163, 7);
    circleProgressFAN1.setProgressIndicatorPosition(0, 0, 54, 54);
    circleProgressFAN1.setRange(0, 100);
    circleProgressFAN1.setCenter(27, 27);
    circleProgressFAN1.setRadius(20);
    circleProgressFAN1.setLineWidth(10);
    circleProgressFAN1.setStartEndAngle(0, 360);
    circleProgressFAN1.setCapPrecision(180);
    circleProgressFAN1.setBackground(touchgfx::Bitmap(BITMAP_DARK_PROGRESSINDICATORS_BG_SMALL_CIRCLE_INDICATOR_BG_LINE_FULL_ID));
    circleProgressFAN1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(105, 41, 41));
    circleProgressFAN1.setPainter(circleProgressFAN1Painter);
    circleProgressFAN1.setValue(0);

    lineProgressTempSound.setXY(292, 34);
    lineProgressTempSound.setProgressIndicatorPosition(0, 0, 184, 20);
    lineProgressTempSound.setRange(0, 100);
    lineProgressTempSound.setBackground(touchgfx::Bitmap(BITMAP_DARK_PROGRESSINDICATORS_BG_MEDIUM_PROGRESS_INDICATOR_BG_ROUND_0_DEGREES_ID));
    lineProgressTempSoundPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(6, 119, 196));
    lineProgressTempSound.setPainter(lineProgressTempSoundPainter);
    lineProgressTempSound.setStart(174, 10);
    lineProgressTempSound.setEnd(9, 10);
    lineProgressTempSound.setLineWidth(16);
    lineProgressTempSound.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    lineProgressTempSound.setValue(0);

    lineProgressTempPow.setXY(293, 7);
    lineProgressTempPow.setProgressIndicatorPosition(0, 0, 184, 20);
    lineProgressTempPow.setRange(0, 100);
    lineProgressTempPow.setBackground(touchgfx::Bitmap(BITMAP_DARK_PROGRESSINDICATORS_BG_MEDIUM_PROGRESS_INDICATOR_BG_ROUND_0_DEGREES_ID));
    lineProgressTempPowPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(6, 119, 196));
    lineProgressTempPow.setPainter(lineProgressTempPowPainter);
    lineProgressTempPow.setStart(174, 10);
    lineProgressTempPow.setEnd(9, 10);
    lineProgressTempPow.setLineWidth(16);
    lineProgressTempPow.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    lineProgressTempPow.setValue(0);

    line1.setPosition(300, 112, 52, 10);
    line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(3, 80, 94));
    line1.setPainter(line1Painter);
    line1.setStart(10, 5);
    line1.setEnd(42, 5);
    line1.setLineWidth(4);
    line1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);

    boxWithBorder1_1_1.setPosition(292, 194, 178, 68);
    boxWithBorder1_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(1, 4, 18));
    boxWithBorder1_1_1.setBorderColor(touchgfx::Color::getColorFrom24BitRGB(3, 80, 94));
    boxWithBorder1_1_1.setBorderSize(5);

    line1_1_1_1.setPosition(378, 200, 11, 57);
    line1_1_1_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(3, 80, 94));
    line1_1_1_1.setPainter(line1_1_1_1Painter);
    line1_1_1_1.setStart(5, 12);
    line1_1_1_1.setEnd(5, 45);
    line1_1_1_1.setLineWidth(4);
    line1_1_1_1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);

    buttonPlay.setXY(309, 199);
    buttonPlay.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_PLAY_ID), touchgfx::Bitmap(BITMAP_PLAY_ID));
    buttonPlay.setIconXY(5, 5);

    textTempPower.setPosition(358, 10, 112, 15);
    textTempPower.setColor(touchgfx::Color::getColorFrom24BitRGB(242, 242, 242));
    textTempPower.setLinespacing(0);
    Unicode::snprintf(textTempPowerBuffer, TEXTTEMPPOWER_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID43).getText());
    textTempPower.setWildcard(textTempPowerBuffer);
    textTempPower.setTypedText(touchgfx::TypedText(T_SINGLEUSEID36));

    textTempSound.setPosition(358, 38, 112, 13);
    textTempSound.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textTempSound.setLinespacing(0);
    Unicode::snprintf(textTempSoundBuffer, TEXTTEMPSOUND_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID39).getText());
    textTempSound.setWildcard(textTempSoundBuffer);
    textTempSound.setTypedText(touchgfx::TypedText(T_SINGLEUSEID38));

    textArea1.setXY(184, 21);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID40));

    textArea1_1.setXY(247, 21);
    textArea1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID41));

    image1.setXY(213, 197);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ETHON_ID));
    image1.setAlpha(67);

    buttonPowOff.setXY(11, 199);
    buttonPowOff.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_PO_ID), touchgfx::Bitmap(BITMAP_PO_ID));
    buttonPowOff.setIconXY(5, 5);
    buttonPowOff.setAction(buttonCallback);

    buttonInput.setXY(68, 199);
    buttonInput.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_RCA__ID), touchgfx::Bitmap(BITMAP_RCA__ID));
    buttonInput.setIconXY(10, 10);
    buttonInput.setAction(buttonCallback);

    buttonEqual.setXY(125, 199);
    buttonEqual.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_EQ_ID), touchgfx::Bitmap(BITMAP_EQ_ID));
    buttonEqual.setIconXY(10, 10);
    buttonEqual.setAction(buttonCallback);

    buttonPlayer.setXY(396, 199);
    buttonPlayer.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID), touchgfx::Bitmap(BITMAP_PLAYER_ID), touchgfx::Bitmap(BITMAP_PLAYER_ID));
    buttonPlayer.setIconXY(6, 6);
    buttonPlayer.setAction(buttonCallback);

    add(tiledImage1);
    add(boxWithBorder1_1);
    add(boxWithBorder3);
    add(digitalClock1);
    add(boxWithBorder2);
    add(ButVolUP);
    add(ButVolDown);
    add(boxWithBorder1);
    add(textVolume);
    add(circleProgressFAN2);
    add(circleProgressFAN1);
    add(lineProgressTempSound);
    add(lineProgressTempPow);
    add(line1);
    add(boxWithBorder1_1_1);
    add(line1_1_1_1);
    add(buttonPlay);
    add(textTempPower);
    add(textTempSound);
    add(textArea1);
    add(textArea1_1);
    add(image1);
    add(buttonPowOff);
    add(buttonInput);
    add(buttonEqual);
    add(buttonPlayer);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::interactionPreOffNextEndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::ButtonWithIcon>& comp)
{
    //GoToPowerOff
    //When InteractionPreOffNext completed change screen to Screen2
    //Go to Screen2 with screen transition towards West
    application().gotoScreen2ScreenCoverTransitionWest();
}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &ButVolUP)
    {
        //InterVolUP
        //When ButVolUP clicked call virtual function
        //Call FunVolUP
        FunVolUP();
    }
    else if (&src == &ButVolDown)
    {
        //InterFunVolDown
        //When ButVolDown clicked call virtual function
        //Call FunVolDown
        FunVolDown();
    }
    else if (&src == &buttonPowOff)
    {
        //PowerOffPrepare
        //When buttonPowOff clicked call virtual function
        //Call prepareOff
        prepareOff();

        //InteractionPreOffNext
        //When PowerOffPrepare completed fade buttonPowOff
        //Fade buttonPowOff to alpha:0 with LinearIn easing in 2000 ms (120 Ticks)
        buttonPowOff.clearFadeAnimationEndedAction();
        buttonPowOff.startFadeAnimation(0, 120, touchgfx::EasingEquations::linearEaseIn);
        buttonPowOff.setFadeAnimationEndedAction(interactionPreOffNextEndedCallback);
    }
    else if (&src == &buttonInput)
    {
        //InteractionToInput
        //When buttonInput clicked change screen to ScreenInputMenu
        //Go to ScreenInputMenu with screen transition towards South
        application().gotoScreenInputMenuScreenSlideTransitionSouth();
    }
    else if (&src == &buttonEqual)
    {
        //IntEqu
        //When buttonEqual clicked change screen to Equalizer
        //Go to Equalizer with screen transition towards East
        application().gotoEqualizerScreenCoverTransitionEast();
    }
    else if (&src == &buttonPlayer)
    {
        //InteractionMus
        //When buttonPlayer clicked change screen to ScreenPlayer
        //Go to ScreenPlayer with screen transition towards North
        application().gotoScreenPlayerScreenSlideTransitionNorth();
    }
}
