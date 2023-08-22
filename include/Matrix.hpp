#ifndef _LAYER_HPP_
#define _LAYER_HPP_
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

class Matrix {
public:
  double getRandom();
  Matrix(int rows, int cols, bool random);
  Matrix *transpose();
  void setValue(int r, int c, double v);
  void printmatrix();
  double getValue(int r, int c);
  int getRows() { return this->numRows; }
  int getCols() { return this->numCols; }
  
private:
  int numRows;
  int numCols;
  vector<vector<double>> values;
};
#endif