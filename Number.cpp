#include "Number.h"

void Number::fillNumberArray(void) {
  numberStr = std::to_string(number);
  
  numberVec.clear();
  numberVec.resize(digitHeight);

  for (int i = 0; i < numberStr.length(); i++) { // String of chars
    for (int j = 0; j < digitHeight; j++) { // Vector of strings
      numberVec[j] += digitVec[numberStr[i] - '0'][j];
    }
  }
}