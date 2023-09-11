#include "common.h"

AImageProcessor::AImageProcessor():image(""),picture(""),idx(-1),oidx(-1) {}

void AImageProcessor::SetOrigin(string _image)
{
	image = _image;
}
void AImageProcessor::FindStart() 
{
	picture = image;
	idx = -1;
	oidx = -1;
}
bool AImageProcessor::FindNextAnimal() 
{
	oidx = idx;
	idx = image.find("animal", oidx + 1);
	return idx != -1;
}
void AImageProcessor::Processing() 
{
	picture.replace(idx, strlen("animal"), "ANIMAL");
}
string AImageProcessor::GetPicture()
{
	return picture;
}
