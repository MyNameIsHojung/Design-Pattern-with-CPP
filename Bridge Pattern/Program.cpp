#include "common.h"


void TestAFVRPC(Camera *_cam);
void TestMFVR(Camera* _cam);

int main()
{
	Camera* cam = new Camera();

	TestAFVRPC(cam);
	TestMFVR(cam);

	delete cam;

	return 0;
}

void TestAFVRPC(Camera* _cam)
{
	cout << "Test AF VR PC" << endl;
	VRModule* vr = new VRModule();
	PCModule* pc = new PCModule();
	Lens* lens = new AFLens();

	lens->AddModule(vr);
	lens->AddModule(pc);

	_cam->PutInLens(lens);
	_cam->TakeAPicture("�ٻ�Ͷ���(0) �������(1) �ǹ�(2) ��(3)", 1);

	delete vr;
	delete pc;
	delete lens;
}
void TestMFVR(Camera* _cam)
{
	cout << "Test MF VR" << endl;
	VRModule* vr = new VRModule();
	Lens* lens = new MFLens();

	lens->AddModule(vr);

	_cam->PutInLens(lens);
	_cam->TakeAPicture("�ٻ�Ͷ���(0) �������(1) �ǹ�(2) ��(3)", 1);

	_cam->FocusUp();
	_cam->TakeAPicture("�ٻ�Ͷ���(0) �������(1) �ǹ�(2) ��(3)", 1);
	_cam->FocusUp();
	_cam->TakeAPicture("�ٻ�Ͷ���(0) �������(1) �ǹ�(2) ��(3)", 1);

	delete vr;
	delete lens;
}