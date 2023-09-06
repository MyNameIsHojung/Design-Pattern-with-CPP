#include "Camera.h"
Camera::Camera(void)
{
	lens = 0;
}

bool Camera::TakeAPucture()
{
	if (lens == 0)
	{
		return false;
	}
	lens->Take();
	return true;
}

Lens* Camera::GetOutLens()
{
	Lens* _lens = lens;
	SetLens(0);
	return _lens;
}

void Camera::SetLens(Lens* _lens)
{
	lens = _lens;
}
Lens* Camera::GetLens()
{
	return lens;
}