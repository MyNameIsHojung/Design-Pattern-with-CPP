#pragma once
class AImageProcessor
{
private:
	string image;
	string picture;
	int idx;
	int oidx;
public:
	AImageProcessor();

public:
	void SetOrigin(string _image);
	void FindStart();
	bool FindNextAnimal ();
	void Processing();
	string GetPicture();
};

