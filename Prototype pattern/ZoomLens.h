#pragma once
class ZoomLens
{
private:
	const int min_zoom;
	const int max_zoom;
	const int step;

	int zoom;
	
private:
	friend class ProLine;
	ZoomLens(int _min_zoom, int _max_zoom, int _step);

private:
	void SetZoom(int Zoom);

public:
	int GetZoom();

public:
	int ZoomIn();
	int ZoomOut();
	ZoomLens* Clone();




};

