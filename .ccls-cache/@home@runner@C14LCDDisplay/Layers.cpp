#include "Layers.h"
#include <iostream>

void Layers::computeHorizontal (void) {
  horizontal.clear();

  horizontal.push_back(' ');
  for (int i = 0; i < fontSize; i++) {
    horizontal.push_back('_');
  }
  horizontal.push_back(' ');

  std::cout << horizontal << std::endl;
}
void Layers::computeLeft (void) {
  left.clear();

  left.push_back('|');
  for (int i = 0; i < fontSize; i++) {
    left.push_back(' ');
  }
  left.push_back(' ');

  std::cout << left << std::endl;
}
void Layers::computeRight (void) {
  right.clear();

  right.push_back(' ');
  for (int i = 0; i < fontSize; i++) {
    right.push_back(' ');
  }
  right.push_back('|');
  right.push_back(' ');

  std::cout << right << std::endl;
}
void Layers::computeBoth (void) {
  both.clear();

  both.push_back('|');
  for (int i = 0; i < fontSize; i++) {
    both.push_back(' ');
  }
  both.push_back('|');
  both.push_back(' ');

  std::cout << both << std::endl;
}
void Layers::computeBlank (void) {
  blank.clear();

  for (int i = 0; i < fontSize + 3; i++) {
    blank.push_back(' ');
  }

  std::cout << blank << std::endl;
}

void Layers::computeLayers(void) {
  computeHorizontal();
  computeLeft();
  computeRight();
  computeBoth();
  computeBlank();
}