#include "HoCamera.h"
#include "HoLens.h"

bool HoCamera::PutlnLens(Lens* lens)
{
	HoLens* holens = dynamic_cast<HoLens*>(lens);
	if (holens == 0) //lens´Â EvLens°¡ ¾Æ´Ò¶§
	{
		return false;
	}
	SetLens(holens);
	return true;
}

bool HoCamera::TakeAPucture()
{
	Lens* lens = GetLens();
	HoLens* holens = dynamic_cast<HoLens*>(lens);
	if (holens == 0)
	{
		return false;
	}
	holens->ManualFocus();
	return Camera::TakeAPucture();
}