#pragma once
#ifndef FIGURE_H
#define FIGURE_H
class Figure
{
public:
	Figure();
	~Figure();
	virtual void erase();
	virtual void draw();
	virtual void center();
private:
	int centerLocation;
};

#endif