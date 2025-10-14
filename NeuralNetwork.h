#ifndef NEURALNETWORKS_H
#define NEURALNETWORKS_H
#include <vector>
#include <iostream>
using namespace std;

class Neuron{
public:
  //constructors
  Neuron(double value);

  void activationFunction(); //Fast Sigmoid Function. May need to swap to a different activation function
  void derive();
  //getter functions
  double getValue() {return this->value;}
  double getActivatedValue() {return this->activatedValue;}
  double getDerivedValue() {return this->derivedValue;}
private:
  double value;
  double activatedValue; // normalizes value, making it easier to compute. This is so it can solve nonlinear problems as well
  double derivedValue; // Take derivative of activatedValue
};

struct Record {
  int speed; // Trying to predict speed based off a number of variables
  vector<double> features; // stuff in a double vector to make it easier to work with
};

void ReadCSVFile(){
  int TrainingSetSize = 520;
  int TestSetSize = 49;
  cout << "Splitting into Training and Testing with a " << TestSetSize << "/" << TrainingSetSize << " split.";
};

#endif