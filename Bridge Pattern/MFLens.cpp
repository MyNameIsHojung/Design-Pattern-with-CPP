#include "common.h"

string MFLens::Take(string _subject, int _distance) 
{
	int mcount = GetModuleCount();
	
	for (int i = 0; i < mcount; i++)
	{
		_subject = ImageProcessing(_subject, i);
	}
	return MakePicture(_subject, GetFocusLevel());
}
void MFLens::FpcusUp() 
{
	Lens::FocusUP();
	cout << "현재 Focus Level: " << GetFocusLevel() << endl;
}
void MFLens::FpcusDown()
{
	Lens::FocusDown();
	cout << "현재 Focus Level: " << GetFocusLevel() << endl;
}
