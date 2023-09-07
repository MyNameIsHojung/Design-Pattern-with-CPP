#pragma once
#include "ZoomLens.h"

class ProLine
{
	ZoomLens* zarr[10];

public:
	ProLine();
	~ProLine();

public:
	ZoomLens* Order(int _idx);

public:
	void ViewZoomLensList();


};

