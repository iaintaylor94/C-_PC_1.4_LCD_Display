#ifndef FILE_IO_H
#define FILE_IO_H

#include "FileHandling.h"

class FileIO : public FileHandling {

protected:
  int fontSize;
  int number;

public:
  FileIO(int argc, char **argv) : FileHandling(argc, argv) {};
  ~FileIO(void) {};

  bool getInput (void);
};




#endif