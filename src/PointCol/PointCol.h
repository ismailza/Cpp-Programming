#ifndef POINTCOL_H
#define POINTCOL_H

#include "../Point/Point.cpp"

class PointCol : public Point
{
  private:
    int col;
  public:
    PointCol();
    PointCol(float, float, int);
    PointCol(const PointCol &);
    void setCol(int);
    int getCol();
};

#endif // POINTCOL_H