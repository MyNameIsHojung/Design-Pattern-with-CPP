#include "common.h"
#include "REPreventBuilder.h"

void REPreventBuilder::CollectImage()
{

	string origin = GetPicture();
	index = origin.find_first_of(RED_ETE);
	cout << index << endl;
}

void REPreventBuilder::Change()
{
	string origin = GetPicture();
	//const char* cstr = origin.c_str();
	int len = origin.size();
	int flen = strlen(RED_ETE);
	string front = origin.substr(0, index);
	string last = origin.substr(index + flen, len - index - flen);
	SetPicture(front + NORMAL_EYE + last);
	index = 0;
}