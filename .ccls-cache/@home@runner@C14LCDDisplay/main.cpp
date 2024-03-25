#include <iostream>
#include "Digits.h"

int main(int argc, char *argv[]) {
  Digits digits (argc, argv);
  digits.getInput();
  digits.computeLayers();
  digits.computeDigits();
}