#include "EvCamera.h"
#include "EvLens.h"

bool EvCamera::PutlnLens(Lens* lens)
{
	EvLens* evlens = dynamic_cast<EvLens*>(lens);
	if (evlens == 0) //lens´Â EvLens°¡ ¾Æ´Ò¶§
	{
		return false;
	}
	SetLens(evlens);
	return true;
}

bool EvCamera::TakeAPucture()
{
	Lens* lens = GetLens();
	EvLens* evlens = dynamic_cast<EvLens*>(lens);
	if (evlens == 0)
	{
		return false;
	}
	evlens->AutoFocus();
	return Camera::TakeAPucture();
}