#pragma once
class AFLens : public Lens
{
public:
	virtual string Take(string _subject, int _distance);

private:
	void AutoFocusing(int _distance);
	string Processing(string _subject);
};

