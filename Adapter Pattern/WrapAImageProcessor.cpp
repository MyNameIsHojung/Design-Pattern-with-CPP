#include "common.h"

WrapAImageProcessor::WrapAImageProcessor():ai_processor(new AImageProcessor()) {}
WrapAImageProcessor::~WrapAImageProcessor() { delete ai_processor; }

void WrapAImageProcessor::SetSubject(string subject)
{
	ai_processor->SetOrigin(subject);
}
void WrapAImageProcessor::FindBegin() 
{
	ai_processor->FindStart();
}
bool WrapAImageProcessor::FindNextPeople() 
{
	return ai_processor->FindNextAnimal();
}
void WrapAImageProcessor::ImageProcessing() 
{
	ai_processor->Processing();
}
string WrapAImageProcessor::GetPicture()
{
	return ai_processor->GetPicture();
}
