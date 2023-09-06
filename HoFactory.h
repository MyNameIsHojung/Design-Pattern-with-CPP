#pragma once
#include "CameraFactory.h"
class HoFactory : public CameraFactory
{
public:
	virtual Camera* CreateCamera();
	virtual Lens* CreateLens();
};

