#include "common.h"

void Compensator::Change(Picture* _picture, int _tone, int _brightness, int _saturation)
{
	_picture->Change(_tone, _brightness, _saturation);
}
