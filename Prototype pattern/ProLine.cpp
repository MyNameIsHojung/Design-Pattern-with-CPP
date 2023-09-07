#include "ProLine.h"
#include "common.h"

ProLine::ProLine()
{
	zarr[0] = new ZoomLens(10, 20, 1);
	zarr[1] = new ZoomLens(10, 30, 2);
	zarr[2] = new ZoomLens(20, 40, 4);
	zarr[3] = new ZoomLens(10, 50, 2);
	zarr[4] = new ZoomLens(15, 60, 5);
	zarr[5] = new ZoomLens(10, 70, 1);
	zarr[6] = new ZoomLens(5, 80, 1);
	zarr[7] = new ZoomLens(25, 90, 1);
	zarr[8] = new ZoomLens(10, 250, 10);
	zarr[9] = new ZoomLens(15, 25, 5);
}

ProLine::~ProLine()
{
	for (int i = 0; i < 10; i++)
	{
		delete zarr[i];
	}
}

ZoomLens* ProLine::Order(int _idx)
{
	if (_idx <0 || _idx >= 10)
	{
		cout << "그런 상품 없음" << endl;
		return 0;
	}
	return zarr[_idx]->Clone();
}

void ProLine::ViewZoomLensList()
{
	for (int i = 0; i < 10; i++)
	{
		cout << i << "번째 ZOOM LENS" << endl;
		cout << "최대 ZOOM: " << zarr[i]->max_zoom << " " << "최소 ZOOM: " << zarr[i]->min_zoom << " " << "단계조절: " << zarr[i]->step << endl;
		cout << "========" << endl;
	}
}