#pragma once
typedef string Picture;

class PictureBuilder
{
	Picture picture;
public:
	PictureBuilder();

public:
	string GetPicture();
	void SetPicture(string origin);
	
public:
	virtual void CollectImage() = 0;
	virtual void Change() = 0;
};

