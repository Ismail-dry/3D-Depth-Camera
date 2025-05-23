#pragma once
#include"PointCloud.h"
class Map {

public:
	Map();
	virtual void insertPointCloud(PointCloud& pc) = 0;
	virtual void insertPoint(Point& p) = 0;
	virtual bool loadMap(string fileName) = 0;
	virtual bool saveMap(string fileName) = 0;
};