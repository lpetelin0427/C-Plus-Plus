#include "stdafx.h"
#include "Polygon.h"

void Polygon::setValues(int newWidth, int newHeight) {
	width = newWidth;
	height = newHeight;
}
int Polygon::getWidth() const {
	return width;
}
int Polygon::getHeight() const {
	return height;
}