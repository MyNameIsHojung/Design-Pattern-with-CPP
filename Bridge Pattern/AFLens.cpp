#include "common.h"
string AFLens::Take(string _subject, int _distance) 
{
	AutoFocusing(_distance);
	_subject = Processing(_subject);
	return MakePicture(_subject, _distance);
}
void AFLens::AutoFocusing(int _distance)
{
	while (_distance > GetFocusLevel())
	{
		FocusUP();
	}
	while (_distance < GetFocusLevel())
	{
		FocusDown();
	}
}
string AFLens::Processing(string _subject)
{
	int mcount = GetModuleCount();
	for (int i = 0; i < mcount; i++)
	{
		_subject = ImageProcessing(_subject, i);
	}
	return _subject;
}
