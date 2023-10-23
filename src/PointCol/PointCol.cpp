#include <iostream>

#include "PointCol.h"

using namespace std;

PointCol::PointCol() : Point(), col(0) {}

PointCol::PointCol(float x, float y, int col) : Point(x, y), col(col) {}

PointCol::PointCol(const PointCol &p) : Point(p), col(p.col) {}

void PointCol::setCol(int col) { this->col = col; }

int PointCol::getCol() { return this->col; }

