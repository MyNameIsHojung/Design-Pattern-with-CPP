#pragma once
class WrapAImageProcessor : public ImageProcessor
{
private:
	AImageProcessor* ai_processor;

public:
	WrapAImageProcessor();
	~WrapAImageProcessor();

public:
	virtual void SetSubject(string subject);
	virtual void FindBegin();
	virtual bool FindNextPeople();
	virtual void ImageProcessing();
	virtual string GetPicture();
};

