#pragma once
class Camera
{
private:
	ImageProcessor* img_processor;

public:
	Camera(ImageProcessor* _img_processor);

public:
	string TakeAPicture(string _subject);
	void UpgradeFirmWare(ImageProcessor* _img_processor);


};
