#ifndef LAYERS_H
#define LAYERS_H

#include <string>
#include "FileIO.h"

class Layers : public FileIO {

  void computeHorizontal (void);
  void computeLeft (void);
  void computeRight (void);
  void computeBoth (void);
  void computeBlank (void);

protected:
  std::string horizontal;
  std::string left;
  std::string right;
  std::string both;
  std::string blank;

public:
  Layers(int argc, char **argv) : FileIO(argc, argv) {};
  ~Layers(void) {};

  void computeLayers (void);
};


#endif