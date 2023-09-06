#include "MyApp.h"

int main()
{
	EHApp* app = new MyApp;
	app->Init();
	app->Run();
	app->Exit();
	delete app;

	return 0;
}