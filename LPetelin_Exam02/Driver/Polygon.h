#pragma once
#ifndef POLYGON_H
#define POLYGON_H

using namespace std;
class Polygon
{	
	protected:
	int width;
	int height;

public:
	void setValues(int newWidth, int newHeight);
	int getWidth() const;
	int getHeight() const;
};

#endif