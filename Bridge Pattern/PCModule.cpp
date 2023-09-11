#include "common.h"

string PCModule::ImageProcessing(string _subject)
{
	int idx = -1;
	while ((idx = _subject.find("0", idx + 1)) != -1)
	{
		_subject.replace(idx, strlen("0"), "1");
	}
	return _subject;
}
