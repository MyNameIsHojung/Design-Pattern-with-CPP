#include "EHApp.h"
void EHApp::Init()
{
	view = MakeView();
}
void EHApp::Run()
{
	view->Show();
}
void EHApp::Exit()
{
	delete view;
}
