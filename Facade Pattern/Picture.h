#pragma once
class Picture
{
private:
	int tone;
	int brightness;
	int saturation;

	const string name;

public:
	Picture(string _name, int _tone, int _brightness, int _saturation);

public:
	void Change(int _tone, int _brightness, int _saturation);
	bool IsEqual(string _name);
	void View();

	string GetName() const;

};

