//============================================================================
// Name        : FirstCpp.cpp
// Author      : Adri
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#define R 10
#define HElle 12

using namespace std;
char var[10];
double dob = 0.32;
int main() {
  var[0] = (char)&dob;
  cout << "!!!Hello World!!!" << var << endl;
  return 0;
}
