#include <stdio.h>

int alphaA(int line){
  switch (line)
  {
  case 1:
    printf("    /\\    ");
    break;
    
  case 2:
    printf("   /  \\   ");
    break;

  case 3:
    printf("  /    \\  ");
    break;

  case 4:
    printf(" |——————| ");
    break;

  default:
    printf(" |      | ");
    break;
  }
  return 0;
}

int space(){
  printf("          ");
  return 0;
}