#include "common.h"
#include "PictureBuilder.h"


PictureBuilder::PictureBuilder()
{
	SetPicture("");
}

string PictureBuilder::GetPicture()
{
	return picture;
}

void PictureBuilder::SetPicture(string _origin)
{
	picture = _origin;
}