#pragma once
#include "Camera.h"
class HoCamera : public Camera
{
public:
	virtual bool PutlnLens(Lens* lens);
	virtual bool TakeAPucture();

};

