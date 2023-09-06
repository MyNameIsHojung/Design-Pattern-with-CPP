#include "MyApp.h"
#include "MyView.h"

EHView* MyApp::MakeView()
{
	return new MyView();
}