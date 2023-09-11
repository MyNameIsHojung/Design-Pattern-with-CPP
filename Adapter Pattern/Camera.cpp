#include "common.h"

Camera::Camera(ImageProcessor* _img_processor):img_processor(_img_processor){}

string Camera::TakeAPicture(string _subject) 
{
	int idx = 0;
	img_processor->SetSubject(_subject);
	img_processor->FindBegin();
	while (img_processor->FindNextPeople())
	{
		img_processor->ImageProcessing();
	}
	return img_processor->GetPicture();
}

void Camera::UpgradeFirmWare(ImageProcessor* _img_processor)
{
	img_processor = _img_processor;
}

