#ifndef DIGITS_H
#define DIGITS_H

#include <vector>
#include "Layers.h"

class Digits : public Layers {
  void computeDigit0 (void);
  void computeDigit1 (void);
  void computeDigit2 (void);
  void computeDigit3 (void);
  void computeDigit4 (void); 
  void computeDigit5 (void);
  void computeDigit6 (void);
  void computeDigit7 (void);
  void computeDigit8 (void);
  void computeDigit9 (void);


protected:
  std::vector<std::vector<std::string>> digitVec;
  std::vector<std::string> digit;
  int digitHeight;

public:
  Digits(int argc, char **argv) : Layers(argc, argv) {};
  ~Digits(void) {};

  void computeDigits (void);
  void printVector ();
};

#endif