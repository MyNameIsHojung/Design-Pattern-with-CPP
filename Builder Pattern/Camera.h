#pragma once
#include "REPreventBuilder.h"
#include "SmoothBuilder.h"
class Camera
{
	PictureBuilder* pbs[2];
	Picture picture;
public:
	Camera();
	~Camera();

public:
	Picture PressAsShutter(string origin, bool night = false);

public:
	Picture GetPicture();

};

