#include "EvFactory.h"
#include "EvCamera.h"
#include "EvLens.h"

Camera* EvFactory::CreateCamera()
{
	return new EvCamera();
}

Lens* EvFactory::CreateLens()
{
	return new EvLens();
}