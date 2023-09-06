#pragma once
#include "PictureBuilder.h"

#define SHARP "Sharp"
#define SMOOTH "Smooth"

class SmoothBuilder : public PictureBuilder
{
	int index;
public:
	virtual void CollectImage();
	virtual void Change();
};

