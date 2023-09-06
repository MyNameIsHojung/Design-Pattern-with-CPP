#pragma once
#include "Camera.h"
#include "Lens.h"

class CameraFactory
{
public:
	virtual Camera* CreateCamera() = 0;
	virtual Lens* CreateLens() = 0;

};

