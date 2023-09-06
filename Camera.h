#pragma once
#include "Lens.h"

class Camera
{
	Lens* lens;

public:
	Camera(void);

public:
	virtual bool PutlnLens(Lens* lens) = 0;
	virtual bool TakeAPucture();

public:
	Lens* GetOutLens();

protected:
	void SetLens(Lens* lens);
	Lens* GetLens();

};

