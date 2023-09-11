#include "common.h"

int main() 
{
	ImageProcessor* IP[2];
	IP[0] = new PImageProcessor();
	IP[1] = new WrapAImageProcessor();

	Camera* cam = new Camera(IP[0]);
	string picture1 = cam->TakeAPicture("people animal book people animal");
	cout << picture1 << endl;
	
	cam->UpgradeFirmWare(IP[1]);
	string picture2 = cam->TakeAPicture("people animal book people animal");
	cout << picture2 << endl;

	delete cam;
	delete IP[0];
	delete IP[1];

	return 0;
}