#include <iostream>
#include "Layers.h"

int main(int argc, char *argv[]) {
  Layers layers (argc, argv);
  layers.getInput();
  layers.computeLayers();
}