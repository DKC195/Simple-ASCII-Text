#include "alphabets.h"

char printing(char letter, int line){
  switch (letter)
  {
  case 'A':
    alphaA(line);
    break;
  
  default:
    space();
    break;
  }
  return 0;
}