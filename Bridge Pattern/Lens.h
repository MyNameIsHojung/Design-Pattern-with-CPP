#pragma once
typedef vector<Module*> MVector;
typedef vector<Module*>::iterator MIter;

class Lens
{
private:
	int focuslevel;
	static const int min_focuslevel;
	static const int max_focuslevel;
	MVector modules;
	int midx;

public:
	Lens(void);

public:
	virtual string Take(string _subject, int _distance) = 0;
	virtual void FocusUP();
	virtual void FocusDown();

public:
	int GetFocusLevel() const;
	int GetModuleCount() const;
	void AddModule(Module* _module);
	void SetModuleIdx(int _idx);

protected:
	int GetModuleIdx() const;
	string ImageProcessing(string _subject, int _idx);
	string MakePicture(string _subject, int _distance);

};

