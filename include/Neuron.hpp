#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>
using namespace std;

class Neuron {

public:
  Neuron(double val);
  // this will be sigmoid or fast sigmoid
  // i will use fast sigmoid here
  // f(x) = x / (1 + |x|)
  void activation();
  // derivative of the fast sigmoid
  // f'(x) = f(x) * (1-f(x))
  void derivate();
  // getter
  double getVal() { return this->val; }
  double getActivationVal() { return this->activatedVal; }
  double getderivative() { return this->derivative; }
  //setter
  void setVal(double v);
private:
  double val;
  // value of neuron after aplying the activation function
  double activatedVal;
  // derivative of the neuron, that is the derivative of activation
  double derivative;
};

#endif