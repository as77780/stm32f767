#include <gui/equalizer_screen/EqualizerView.hpp>
#include <gui/equalizer_screen/EqualizerPresenter.hpp>

EqualizerPresenter::EqualizerPresenter(EqualizerView& v)
    : view(v)
{
}

void EqualizerPresenter::activate()
{
	model->ActivEnc();
}

void EqualizerPresenter::deactivate()
{
	 model->DisativEnc();
}
