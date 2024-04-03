#include "Number.h"

void Number::fillNumberArray(void) {
  numberStr = std::to_string(number); std::cout << numberStr << std::endl;
  
  numberVec.clear();
  numberVec.resize(digitHeight);
  std::cout << "numberVec.clear()" << std::endl;
  for (int i = 0; i < numberStr.length(); i++) { // String of chars
    std::cout << i << " " << numberStr[i] << std::endl;
    for (int j = 0; j < digitHeight; j++) { // Vector of strings
      std::cout << j << std::endl;
      // BREAKS HERE
      numberVec[j] += digitVec[numberStr[i]][j];
    }
  }
}