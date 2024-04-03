#include "FileIO.h"

bool FileIO::getInput (void) {
  fileIn >> fontSize >> number;
  if (fontSize == 0 && number == 0)   
    return false;
  else 
    return true;
}

void FileIO::printNumVec (void) {
  for (auto ir = numberVec.begin(); ir != numberVec.end(); ir++) {
    std::cout << *ir << std::endl;
  }
}