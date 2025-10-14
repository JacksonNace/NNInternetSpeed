#ifndef NEURALNETWORKS_H
#define NEURALNETWORKS_H
#include <vector>
using namespace std;

void ReadCSVFile(){
  int TrainingSetSize = 520;
  int TestSetSize = 49;
  cout << "Splitting into Training and Testing with a " << 
};



struct Case {
  int speed; // Trying to predict speed based off a number of variables
  vector<double> features; // stuff in a double vector to make it easier to work with
};

#endif