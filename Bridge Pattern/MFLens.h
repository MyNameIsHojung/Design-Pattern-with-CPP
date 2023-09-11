#pragma once
class MFLens : public Lens
{
public:
	virtual string Take(string _subject, int _distance);

public:
	void FpcusUp();
	void FpcusDown();
};

