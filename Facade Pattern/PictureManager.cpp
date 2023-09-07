#include "common.h"

bool PictureManager::Exist(string _name) { return FindPicture(_name) != NULL; }
bool PictureManager::AddPicture(Picture* _picture) 
{
	if (Exist(_picture->GetName()))
	{
		return false;
	}
	pictures.push_back(_picture);
	return true;
}
Picture* PictureManager::FindPicture(string _name) 
{
	PIter seek = pictures.begin();
	PIter end = pictures.end();
	Picture* picture = 0;

	for (; seek != end; ++seek)
	{
		picture = (*seek);
		if (picture->IsEqual(_name))
		{
			return picture;
		}
	}
	return NULL;
}
void PictureManager::View()
{
	PIter seek = pictures.begin();
	PIter end = pictures.end();
	Picture* picture = 0;

	for (; seek != end; ++seek)
	{
		picture = (*seek);
		picture->View();
	}
}