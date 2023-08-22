#include "../include/Matrix.hpp"
#include <iostream>
#include <random>
using namespace std;
Matrix::Matrix(int rows, int cols, bool random) {
  this->numCols = cols;
  this->numRows = rows;

  for (int i = 0; i < numRows; i++) {
    vector<double> colValues;
    for (int j = 0; j < numCols; j++) {
      double r = 0.00;
      if (random) {
        r = this->getRandom();
      }
      colValues.push_back(r);
    }
    this->values.push_back(colValues);
  }
}
void Matrix::printmatrix() {
  for (int i = 0; i < this->numRows; i++) {
    for (int j = 0; j < this->numCols; j++) {
      //   cout << this->values.at(i).at(j) << "\t\t";
      cout << this->values[i][j] << "\t\t";
    }
    cout << endl;
  }
}
double Matrix::getRandom() {
  random_device rd;
  mt19937 gen(rd());
  uniform_real_distribution<> dis(0, 1);
  return dis(gen);
}
Matrix *Matrix::transpose() {
  Matrix *transposed = new Matrix(this->numCols, this->numRows, false);
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
      transposed->setValue(j, i, this->getValue(i, j));
    }
  }
  return transposed;
}
void Matrix::setValue(int r, int c, double v) { this->values[r][c] = v; }

double Matrix::getValue(int r, int c) { return this->values[r][c]; }