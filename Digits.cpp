#include "Digits.h"
#include <iostream>


void Digits::printVector (std::vector<std::string> &vec) {
  for (auto ir = vec.begin(); ir != vec.end(); ir++) {
    std::cout << *ir << std::endl;
  }
}


void Digits::computeDigit0(void) {
  digit0.clear();

  digit0.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit0.push_back(both);
  }
  digit0.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit0.push_back(both);
  }
  digit0.push_back(horizontal);

  printVector (digit0);
}
void Digits::computeDigit1(void) {
  digit1.clear();

  digit1.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit1.push_back(right);
  }
  digit1.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit1.push_back(right);
  }
  digit1.push_back(blank);

  printVector (digit1);
}
void Digits::computeDigit2(void) {
  digit2.clear();

  digit2.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit2.push_back(right);
  }
  digit2.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit2.push_back(left);
  }
  digit2.push_back(horizontal);

  printVector (digit2);
}
void Digits::computeDigit3(void) {
  digit3.clear();

  digit3.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit3.push_back(right);
  }
  digit3.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit3.push_back(right);
  }
  digit3.push_back(horizontal);

  printVector (digit3);
}
void Digits::computeDigit4(void) {
  digit4.clear();

  digit4.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit4.push_back(both);
  }
  digit4.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit4.push_back(right);
  }
  digit4.push_back(blank);

  printVector (digit4);
}
void Digits::computeDigit5(void) {
  digit5.clear();

  digit5.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit5.push_back(left);
  }
  digit5.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit5.push_back(right);
  }
  digit5.push_back(horizontal);

  printVector (digit5);
}
void Digits::computeDigit6(void) {
  digit6.clear();

  digit6.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit6.push_back(left);
  }
  digit6.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit6.push_back(both);
  }
  digit6.push_back(horizontal);

  printVector (digit6);
}
void Digits::computeDigit7(void) {
  digit7.clear();

  digit7.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit7.push_back(right);
  }
  digit7.push_back(blank);
  for (int i = 0; i < fontSize; i++) {
    digit7.push_back(right);
  }
  digit7.push_back(blank);

  printVector (digit7);
}
void Digits::computeDigit8(void) {
  digit8.clear();

  digit8.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit8.push_back(both);
  }
  digit8.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit8.push_back(both);
  }
  digit8.push_back(horizontal);

  printVector (digit8);
}
void Digits::computeDigit9(void) {
  digit9.clear();

  digit9.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit9.push_back(both);
  }
  digit9.push_back(horizontal);
  for (int i = 0; i < fontSize; i++) {
    digit9.push_back(right);
  }
  digit9.push_back(blank);

  printVector (digit9);
}

void Digits::computeDigits(void) {
  computeDigit0();
  computeDigit1();
  computeDigit2();
  computeDigit3();
  computeDigit4();
  computeDigit5();
  computeDigit6();
  computeDigit7();
  computeDigit8();
  computeDigit9();
}
