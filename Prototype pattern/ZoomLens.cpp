#include "ZoomLens.h"
#include "common.h"



ZoomLens::ZoomLens(int _min_zoom, int _max_zoom, int _step):min_zoom(_min_zoom), max_zoom(_max_zoom),step(_step)
{
	zoom = _min_zoom;
}

int ZoomLens::ZoomIn()
{
	int nz = zoom;
	cout << "현재 Zoom: " << zoom << endl;
	cout << "확대" << endl;
	nz += step;
	if (nz > max_zoom)
	{
		nz = max_zoom;
	}
	SetZoom(nz);
	cout << "확대 후 Zoom: " << zoom << endl;

	return GetZoom();
}
int ZoomLens::ZoomOut()
{
	int nz = zoom;
	cout << "현재 Zoom: " << zoom << endl;
	cout << "축소" << endl;
	nz -= step;
	if (nz < min_zoom)
	{
		nz = min_zoom;
	}
	SetZoom(nz);
	cout << "축소 후 Zoom: " << zoom << endl;

	return GetZoom();

}

ZoomLens* ZoomLens::Clone()
{
	return new ZoomLens(min_zoom, max_zoom, step);
}

void ZoomLens::SetZoom(int _zoom)
{
	zoom = _zoom;
}
int ZoomLens::GetZoom()
{
	return zoom;
}