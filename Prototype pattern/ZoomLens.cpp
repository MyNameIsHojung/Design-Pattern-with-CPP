#include "ZoomLens.h"
#include "common.h"



ZoomLens::ZoomLens(int _min_zoom, int _max_zoom, int _step):min_zoom(_min_zoom), max_zoom(_max_zoom),step(_step)
{
	zoom = _min_zoom;
}

int ZoomLens::ZoomIn()
{
	int nz = zoom;
	cout << "���� Zoom: " << zoom << endl;
	cout << "Ȯ��" << endl;
	nz += step;
	if (nz > max_zoom)
	{
		nz = max_zoom;
	}
	SetZoom(nz);
	cout << "Ȯ�� �� Zoom: " << zoom << endl;

	return GetZoom();
}
int ZoomLens::ZoomOut()
{
	int nz = zoom;
	cout << "���� Zoom: " << zoom << endl;
	cout << "���" << endl;
	nz -= step;
	if (nz < min_zoom)
	{
		nz = min_zoom;
	}
	SetZoom(nz);
	cout << "��� �� Zoom: " << zoom << endl;

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