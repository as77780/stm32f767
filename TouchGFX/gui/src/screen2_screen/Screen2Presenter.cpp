#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

Screen2Presenter::Screen2Presenter(Screen2View& v)
    : view(v)
{
}

void Screen2Presenter::activate()
{
	model->SwitchOFF();
}

void Screen2Presenter::deactivate()
{
	model->ResetPowerFlag();
	model->SwitchON();
}
