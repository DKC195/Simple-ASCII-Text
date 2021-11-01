#include <stdio.h>
#include "abc.h"

void alphaA(int line)
{
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
    A9T9();
    break;

  default:
    A9B9();
    break;
  }
}

void alphaB(int line)
{
  switch (line)
  {
  case 1:
  case 4:
    B9T12();
    break;

  case 3:
    printf(" |_____/  ");
    break;

  case 6:
    B9D6();
    break;

  default:
    A9B9();
    break;
  }
}

void alphaC(int line)
{
  switch (line)
  {
  case 1:
    printf("    /¯¯¯  ");
    break;

  case 2:
    printf("   /      ");
    break;

  case 3:
    C1B6B();
    break;
  
  case 4:
    printf("  \\       ");
    break;
  
  case 5:
    printf("   \\      ");
    break;

  default:
    printf("    \\___  ");
    break;
  }
}

void alphaD(int line)
{
  switch (line)
  {
  case 1:
    B9T12();
    break;

  case 2:
    D9B12();
    break;
  
  case 5:
    D9B6();
    break;

  case 6:
    B9D6();
    break;

  default:
    A9B9();
    break;
  }
}

void alphaE(int line)
{
  switch (line)
  {
  case 1:
  case 4:
    E9T();
    break;

  case 3:
    E9D();
    break;
  
  case 6:
    E9D();
    break;

  default:
    E9B();
    break;
  }
}

void alphaF(int line)
{
  switch (line)
  {
  case 1:
  case 4:
    E9T();
    break;
  
  case 3:
    E9D();
    break;

  default:
    E9B();
    break;
  }
}

void alphaG(int line)
{
  switch (line)
  {
  case 1:
    G2B6T12B1();
    break;
  
  case 2:
    G1B6B12B();
    break;

  case 5:
    printf(" |    /¯| ");
    break;

  case 6:
    printf("  \\__/  | ");
    break;

  default:
    E9B();
    break;
  }
}

void alphaH(int line)
{
  switch (line)
  {
  case 4:
    A9T9();
    break;

  case 3:
    H9D9();
    break;
  
  default:
    A9B9();
    break;
  }
}

void alphaI(int line)
{
  switch (line)
  {
    case 1:
      ITM9M9T();
      break;

    case 6:
      IDM9M9D();
      break;

    default:
      IBM9M9B();
      break;
  }
}

void alphaJ(int line)
{
  switch (line)
  {
  case 1:
    A9T9();
    break;

  case 5:
    D9B6();
    break;

  case 6:
    B9D6();
    break;

  default:
    JB9();
    break;
  }
}

void space()
{
  printf("          ");
}