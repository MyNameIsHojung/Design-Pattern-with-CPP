#pragma once
#include "Camera.h"
class EvCamera : public Camera
{
public:
	virtual bool PutlnLens(Lens* lens);
	virtual bool TakeAPucture();

};

