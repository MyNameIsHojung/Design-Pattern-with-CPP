#pragma once
#include "CameraFactory.h"

class EvFactory : public CameraFactory
{
public:
	virtual Camera* CreateCamera();
	virtual Lens* CreateLens();

};

