#include "common.h"

string VRModule::ImageProcessing(string _subject)
{
	int idx = -1;
	while ((idx = _subject.find("����", idx + 1)) != -1)
	{
		_subject.replace(idx, strlen("����"), "");
	}
	return _subject;
}
