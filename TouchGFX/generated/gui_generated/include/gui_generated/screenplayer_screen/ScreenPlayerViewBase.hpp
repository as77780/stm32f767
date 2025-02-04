/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENPLAYERVIEWBASE_HPP
#define SCREENPLAYERVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenplayer_screen/ScreenPlayerPresenter.hpp>
#include <touchgfx/widgets/TiledImage.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/Image.hpp>

class ScreenPlayerViewBase : public touchgfx::View<ScreenPlayerPresenter>
{
public:
    ScreenPlayerViewBase();
    virtual ~ScreenPlayerViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void PlayToBack()
    {
        // Override and implement this function in ScreenPlayer
    }

    virtual void PlayToPlay()
    {
        // Override and implement this function in ScreenPlayer
    }

    virtual void PlayToFollow()
    {
        // Override and implement this function in ScreenPlayer
    }

    virtual void PlayToStop()
    {
        // Override and implement this function in ScreenPlayer
    }

    virtual void PlayHDD()
    {
        // Override and implement this function in ScreenPlayer
    }

    virtual void PlayRadio()
    {
        // Override and implement this function in ScreenPlayer
    }

    virtual void PlayBUD()
    {
        // Override and implement this function in ScreenPlayer
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::TiledImage tiledImage1;
    touchgfx::BoxWithBorder boxWithBorder1_1_1;
    touchgfx::BoxWithBorder boxWithBorder1_1;
    touchgfx::Box box1_1;
    touchgfx::Button buttonBack;
    touchgfx::ButtonWithIcon buttonPlayToBack;
    touchgfx::ButtonWithIcon buttonPlayToFollow;
    touchgfx::ButtonWithIcon buttonPlay;
    touchgfx::ButtonWithIcon buttonStop;
    touchgfx::Box box1;
    touchgfx::TextArea textArea1;
    touchgfx::IconButtonStyle< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger > > flexButtonHDD;
    touchgfx::IconButtonStyle< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger > > flexButtonRadio;
    touchgfx::IconButtonStyle< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger > > flexButtonBud;
    touchgfx::BoxWithBorder boxWithBorder1_1_2;
    touchgfx::Image imagePlay;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenPlayerViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<ScreenPlayerViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREENPLAYERVIEWBASE_HPP
