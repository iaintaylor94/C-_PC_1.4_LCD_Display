#ifndef FILE_IO_H
#define FILE_IO_H

#include <vector>
#include <iostream>
#include "FileHandling.h"

class FileIO : public FileHandling {

protected:
  int fontSize;
  int number;

  std::vector<std::string> numberVec;

public:
  FileIO(int argc, char **argv) : FileHandling(argc, argv) {};
  ~FileIO(void) {};

  bool getInput (void);
  void printNumVec (void);
};




#endif