#ifndef NEURALNETWORKS_H
#define NEURALNETWORKS_H
#include <vector>
using namespace std;

struct Case {
  int diagnosis; // 1 for malignant, 0 for benign. We swap this data as it is originally M and B
  vector<double> features; // stuff in a double vector to make it easier to work with
  // minor change to test commits
};

#endif