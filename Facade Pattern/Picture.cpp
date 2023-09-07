#include "common.h"

Picture::Picture(string _name, int _tone, int _brightness, int _saturation):
	name(_name), tone(_tone), brightness(_brightness), saturation(_saturation) {}

void Picture::Change(int _tone, int _brightness, int _saturation)
{
	tone += _tone;
	brightness += _brightness;
	saturation += _saturation;
}

bool Picture::IsEqual(string _name) { return name == _name; }

void Picture::View()
{
	cout << name << "###" << endl;
	cout << "tone: " << tone <<" ";
	cout << "brightness: " << brightness << " ";
	cout << "saturation: " << saturation << endl;
}

string Picture::GetName() const { return name; }

