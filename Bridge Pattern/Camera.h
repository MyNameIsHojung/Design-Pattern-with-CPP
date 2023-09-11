#pragma once
class Camera
{
private:
	Lens* lens;

public:
	Camera();

public:
	void PutInLens(Lens* _lens);
	void TakeAPicture(string _subject, int _distance);
	void FocusUp();
	void FocusDown();
	void SetModuleIdx(int _idx);
	int GetModuleCount() const;

};

