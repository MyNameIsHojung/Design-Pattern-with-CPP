#include "common.h"

SmartManager::SmartManager() :com(new Compensator()), pm(new PictureManager()) {}

SmartManager::~SmartManager()
{
	delete com;
	delete pm;
}

bool SmartManager::Exit(string _name) { return pm->Exist(_name); }

bool SmartManager::AddPicture(Picture* _picture) { return pm->AddPicture(_picture); }

Picture* SmartManager::FindPiture(string _name) { return pm->FindPicture(_name); }

bool SmartManager::Change(string _name, int _tone, int _brightness, int _saturation)
{
	Picture* picture = pm->FindPicture(_name);
	if (picture == NULL)
	{
		return false;
	}
	com->Change(picture, _tone, _brightness, _saturation);
	return true;
}

void SmartManager::View() { pm->View(); }
