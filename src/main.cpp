#include "../include/Matrix.hpp"
#include "../include/Neuron.hpp"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  Matrix *m = new Matrix(3, 2, true);
  m->printmatrix();
  cout << "-----Transpose------" << endl;
  Matrix *transposed = m->transpose();
  transposed->printmatrix();
  return 0;
}