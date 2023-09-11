#include "common.h"

const int Lens::min_focuslevel = 1;
const int Lens::max_focuslevel = 3;

Lens::Lens(void):focuslevel(min_focuslevel),midx(-1) {}
void Lens::FocusUP() 
{
	if (focuslevel < max_focuslevel)
	{
		focuslevel++;
	}
}
void Lens::FocusDown() 
{
	if (focuslevel > min_focuslevel)
	{
		focuslevel--;
	}
}
int Lens::GetFocusLevel() const 
{
	return focuslevel;
}
int Lens::GetModuleCount() const 
{
	return modules.size();
}
void Lens::AddModule(Module* _module) 
{
	modules.push_back(_module);
}
void Lens::SetModuleIdx(int _idx)
{
	midx = _idx;
}
int Lens::GetModuleIdx() const
{
	return midx;
}
string Lens::ImageProcessing(string _subject, int _idx) 
{
	if ((_idx>=0)||(_idx<GetModuleCount()))
	{
		Module* module = modules[_idx];
		_subject = module->ImageProcessing(_subject);
	}
	return _subject;
}
string Lens::MakePicture(string _subject, int _distance)
{
	char buf[256];
	string s = _itoa(_distance, buf, 256); // 숫자를 문자열로 , 문자열을 숫자로  itoi
	int idx = -1;
	while ((idx = _subject.find(s,idx+1)) != -1)
	{
		_subject.replace(idx, s.size(), "선명");
	}
	return _subject;
}