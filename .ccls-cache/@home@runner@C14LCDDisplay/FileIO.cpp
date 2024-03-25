#include "FileIO.h"
//#include <fstream>

bool FileIO::getInput (void) {
  fileIn >> fontSize >> number;
  if (fontSize == 0 && number == 0)   
    return false;
  else 
    return true;
}