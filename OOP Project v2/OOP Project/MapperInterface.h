#pragma once
#include <vector>
#include"PointCloudGenerator.h"
#include"PointCloud.h"
#include"Map.h"
#include"PointCloudRecorder.h"
class MapperInterface {
private:
	PointCloud pointCloud;
	PointCloud patch;
	vector<PointCloudGenerator*> generators;
	PointCloudRecorder* recorder;
	Map* map;
public:
	MapperInterface();
	void addGenerator(PointCloudGenerator*);
	void setRecorder(PointCloudRecorder*);
	bool generate();
	bool recordPointCloud();
	bool recordMap();
	bool insertMap();
};