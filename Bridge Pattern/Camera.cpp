#include "common.h"


Camera::Camera():lens(0) {}
void Camera::PutInLens(Lens* _lens) { lens = _lens; }
void Camera::TakeAPicture(string _subject, int _distance) 
{
	cout << "�ǻ�ü: " << _subject << endl;
	if (lens == 0)
	{
		cout << "����: " << "��" << endl;
	}
	else
	{
		cout << "����: " << lens->Take(_subject, _distance) << endl;
	}
}
void Camera::FocusUp() 
{
	if (lens != 0)
	{
		lens->FocusUP();
	}
}
void Camera::FocusDown() 
{
	if (lens != 0)
	{
		lens->FocusDown();
	}
}
void Camera::SetModuleIdx(int _idx) 
{
	if (lens != 0)
	{
		return lens->SetModuleIdx(_idx);
	}
}
int Camera::GetModuleCount() const
{
	if (lens != 0)
	{
		return lens->GetModuleCount();
	}
	return -1;
}
