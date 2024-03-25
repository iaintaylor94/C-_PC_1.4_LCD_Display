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

  void printVector (std::vector<std::string> &);

protected:
  std::vector<std::string> digit0;
  std::vector<std::string> digit1;
  std::vector<std::string> digit2;
  std::vector<std::string> digit3;
  std::vector<std::string> digit4;
  std::vector<std::string> digit5;
  std::vector<std::string> digit6;
  std::vector<std::string> digit7;
  std::vector<std::string> digit8;
  std::vector<std::string> digit9;

public:
  Digits(int argc, char **argv) : Layers(argc, argv) {};
  ~Digits(void) {};

  void computeDigits (void);

};

#endif