#pragma once

/**
* Simple class containg an x and y for points
*/
class Point
{
public:
	int x;
	int y;

	Point() {
		x = 0;
		y = 0;
	}

	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

