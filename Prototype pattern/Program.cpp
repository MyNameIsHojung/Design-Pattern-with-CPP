#include "common.h"
#include "ProLine.h"

int main()
{
	ProLine* pl = new ProLine();
	int select_num = 2;
	pl->ViewZoomLensList();
	cout << "¼±ÅÃÇÑ LENS: " << select_num << endl;
	ZoomLens* zl = pl->Order(2);
	zl->ZoomIn();

	delete pl;
	delete zl;

	return 0;
}