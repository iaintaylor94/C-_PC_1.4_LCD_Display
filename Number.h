#ifndef NUMBER_H
#define NUMBER_H

#include <vector>
#include <string>
#include "Digits.h"

class Number : public Digits {
  std::string numberStr;

public:
  Number(int argc, char **argv) : Digits(argc, argv) {};
  ~Number(void) {};

  void fillNumberArray (void);

};

#endif