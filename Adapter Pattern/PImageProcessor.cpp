#include "common.h"
PImageProcessor::PImageProcessor():subject(""),picture(""),idx(-1),oidx(-1) {}

void PImageProcessor::SetSubject(string _subject)
{
	subject = _subject;
}

void PImageProcessor::FindBegin()
{
	picture = subject;
	idx = -1;
	oidx = -1;
}

bool PImageProcessor::FindNextPeople()
{
	oidx = idx;
	idx = subject.find("people", oidx + 1);

	return idx != -1;
}

void PImageProcessor::ImageProcessing()
{
	picture.replace(idx, strlen("people"), "PEOPLE");
}

string PImageProcessor::GetPicture()
{
	return picture;
}