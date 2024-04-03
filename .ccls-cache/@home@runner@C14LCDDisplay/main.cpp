#include <iostream>
#include "Number.h"

int main(int argc, char *argv[]) {
  Number number (argc, argv);
  while (number.getInput()) {
    number.computeLayers();
    number.computeDigits();
    //number.printVector();
    number.fillNumberArray();
    number.printNumVec();
  }
}