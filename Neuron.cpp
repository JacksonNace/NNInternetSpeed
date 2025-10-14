//Neuron Header class implementation

#include "NeuralNetwork.h"
#include <cmath>

Neuron::Neuron(double val) {
  this->value = value;
  activationFunction();
  derive();
}

//Fast Sigmoid Function
void Neuron::activationFunction(){
  this->activatedValue = this->value / (1 + abs(this->value));
}