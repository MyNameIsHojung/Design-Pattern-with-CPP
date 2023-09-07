#include "common.h"

int main()
{
	Picture* picture = new Picture("������ ȣ��", 100, 100, 100);
	Picture* picture2 = new Picture("������ ȣ��2", 100, 100, 100);
	SmartManager* sm = new SmartManager();
	sm->AddPicture(picture);
	sm->AddPicture(picture2);
	sm->View();
	cout << "========================" << endl;
	sm->Change("������ ȣ��", 20, 20, -30);
	sm->View();

	delete sm;
	delete picture;
	delete picture2;

	return 0;
}