#include "common.h"
#include "Camera.h"


Camera::Camera()
{
	pbs[0] = new REPreventBuilder();
	pbs[1] = new SmoothBuilder();
}

Camera::~Camera()
{
	delete pbs[0];
	delete pbs[1];
}

Picture Camera::PressAsShutter(string origin, bool night)
{
	PictureBuilder* pb = 0;
	if (night)
	{
		pb = pbs[0];
	}
	else
	{
		pb = pbs[1];
	}
	pb->SetPicture(origin);
	pb->CollectImage();
	pb->Change();
	picture = pb->GetPicture();
	return GetPicture();
}

Picture Camera::GetPicture()
{
	return "»çÁø: " + picture;
}