#include "EvLens.h"
#include "HoLens.h"
#include "EvCamera.h"
#include "HoCamera.h"
#include "EvFactory.h"
#include "HoFactory.h"


#include <iostream>
using namespace std;

void AccPattern();
void NotPattern();
void Why();
void Good();

int main()
{
	NotPattern();
	AccPattern();

	return 0;
}

void AccPattern()
{
	cout << "패턴 적용" << endl;
	CameraFactory* cf = new EvFactory();
	Camera* camera = cf->CreateCamera();
	Lens* lens = cf->CreateLens();
	camera->PutlnLens(lens);
	camera->TakeAPucture();
}

void  NotPattern()
{
	cout << "패턴 적용하기 전" << endl;
	Good();
	Why();
}

void Good()
{
	cout << "Good" << endl;
	Camera* camera = new HoCamera();
	Lens* lens = new HoLens();
	camera->PutlnLens(lens);
	camera->TakeAPucture();

	delete lens;
	delete camera;
}

void Why()
{
	cout << "Why" << endl;

	Camera* camera = new HoCamera();
	Lens* lens = new EvLens();
	camera->PutlnLens(lens);
	camera->TakeAPucture();

	delete lens;
	delete camera;
}
