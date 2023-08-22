#include "../include/Neuron.hpp"
#include "math.h"

// constructor of the Neuron class
Neuron::Neuron(double val) {
  this->val = val;
  activation();
  derivate();
}

// fast sigmoid implementation
void Neuron::activation() {
  this->activatedVal = this->val / (1 + abs(this->val));
}
void Neuron::derivate() {
  this->derivative = this->activatedVal * (1 - this->activatedVal);
}
void Neuron::setVal(double v) {
  this->val = v;
  activation();
  derivate();
}