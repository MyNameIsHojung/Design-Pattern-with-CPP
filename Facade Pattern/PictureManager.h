#pragma once

typedef vector<Picture*> Pictures;
typedef vector<Picture*>::iterator PIter;

class PictureManager
{
private:
	Pictures pictures;

public:
	bool Exist(string _name);
	bool AddPicture(Picture* _picture);
	Picture* FindPicture(string _name);
	void View();

};

