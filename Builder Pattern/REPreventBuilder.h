#pragma once
#include "PictureBuilder.h"

#define RED_ETE "RedEye"
#define NORMAL_EYE "NormalEye"

class REPreventBuilder : public PictureBuilder
{
	int index;

public:
	virtual void CollectImage();
	virtual void Change();

};

