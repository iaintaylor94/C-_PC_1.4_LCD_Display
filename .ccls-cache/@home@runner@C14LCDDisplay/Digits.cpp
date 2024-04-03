#include "Digits.h"
#include <iostream>


void Digits::printVector(void) {
  for (auto ir = digitVec.begin(); ir != digitVec.end(); ir++) {
    for (auto jr = ir->begin(); jr != ir->end(); jr++) {
      std::cout << *jr << std::endl;
    }
  }
}


void Digits::computeDigit0(void) {
  digit.clear();

  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(both);
  }
  digit.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(both);
  }
  digit.push_back(horizontal);
}
void Digits::computeDigit1(void) {
  digit.clear();

  digit.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(blank);
}
void Digits::computeDigit2(void) {
  digit.clear();

  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(left);
  }
  digit.push_back(horizontal);
}
void Digits::computeDigit3(void) {
  digit.clear();

  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(horizontal);
}
void Digits::computeDigit4(void) {
  digit.clear();

  digit.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(both);
  }
  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(blank);
}
void Digits::computeDigit5(void) {
  digit.clear();

  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(left);
  }
  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(horizontal);
}
void Digits::computeDigit6(void) {
  digit.clear();

  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(left);
  }
  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(both);
  }
  digit.push_back(horizontal);
}
void Digits::computeDigit7(void) {
  digit.clear();

  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(blank);
}
void Digits::computeDigit8(void) {
  digit.clear();

  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(both);
  }
  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(both);
  }
  digit.push_back(horizontal);
}
void Digits::computeDigit9(void) {
  digit.clear();

  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(both);
  }
  digit.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit.push_back(right);
  }
  digit.push_back(blank);
}

void Digits::computeDigits(void) {
  digitVec.clear();
  
  computeDigit0(); digitVec.push_back(digit);
  computeDigit1(); digitVec.push_back(digit);
  computeDigit2(); digitVec.push_back(digit);
  computeDigit3(); digitVec.push_back(digit);
  computeDigit4(); digitVec.push_back(digit);
  computeDigit5(); digitVec.push_back(digit);
  computeDigit6(); digitVec.push_back(digit);
  computeDigit7(); digitVec.push_back(digit);
  computeDigit8(); digitVec.push_back(digit);
  computeDigit9(); digitVec.push_back(digit);

  digitHeight = fontSize * 2 + 3;
}