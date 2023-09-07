#pragma once
class SmartManager
{
private:
	Compensator* com;
	PictureManager* pm;

public:
	SmartManager();
	~SmartManager();

public:
	bool Exit(string _name);
	bool AddPicture(Picture* _picture);
	Picture* FindPiture(string _name);
	bool Change(string _name, int _tone, int _brightness, int _saturation);
	void View();
};

