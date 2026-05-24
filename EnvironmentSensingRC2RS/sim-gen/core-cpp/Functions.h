
#ifndef ROBOCALC_FUNCTIONS_H_
#define ROBOCALC_FUNCTIONS_H_

#include "DataTypes.h"
#include <vector>

double intensity(std::vector<double> gs);
Status analysis(std::vector<double> gs);
double location(std::vector<double> gs);
bool gt(double i1, double i2);

#endif
