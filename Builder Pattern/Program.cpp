#include "common.h"
#include "Camera.h"

int main()
{
	Camera* camera = new Camera();
	camera->PressAsShutter("RedEyeSharpBody", true);
	cout << camera->GetPicture() << endl;

	camera->PressAsShutter("RedEyeSharpBody", false);
	cout << camera->GetPicture() << endl;

	return 0;
}
