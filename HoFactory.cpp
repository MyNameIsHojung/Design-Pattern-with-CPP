#include "HoFactory.h"
#include "HoCamera.h"
#include "HoLens.h"

Camera* HoFactory::CreateCamera()
{
	return new HoCamera();
}

Lens* HoFactory::CreateLens()
{
	return new HoLens();
}