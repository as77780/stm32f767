#ifndef SCREEN2_PRESENTER_HPP
#define SCREEN2_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Screen2View;

class Screen2Presenter : public Presenter, public ModelListener
{
public:
    Screen2Presenter(Screen2View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screen2Presenter() {};
    void saveHour(uint8_t hour) { model->saveHour(hour);  }
    void saveMinute(uint8_t minute){ model->saveMinute(minute);  }
    uint8_t getHour(){ return model->getHour(); }
    uint8_t getMinute(){ return model->getMinute(); }
    uint8_t getSecond(){ return model->getSecond(); }
  //  void SwitchON(){model->SwitchON();}
//	void SwitchOFF(){model->SwitchOFF();}

    void ResetPowerFlag(){model->ResetPowerFlag();}
    uint8_t CheckPowerFlag(){return model->CheckPowerFlag();}


private:
    Screen2Presenter();

    Screen2View& view;
};


#endif // SCREEN2_PRESENTER_HPP
