#pragma once
class PImageProcessor : public ImageProcessor
{
private:
	string subject;
	string picture;
	int idx;
	int oidx;

public:
	PImageProcessor();

public:
	virtual void SetSubject(string _subject);
	virtual void FindBegin();
	virtual bool FindNextPeople();
	virtual void ImageProcessing();
	virtual string GetPicture();

};

