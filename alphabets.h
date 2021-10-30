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
    A9M9();
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
    B9T12();
    break;

  case 3:
  case 6:
    B9D6();
    break;

  case 4:
    B9B12();
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
    printf("  /       ");
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
    printf(" |      / ");
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
    E9T();
    break;
  
  case 3:
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


void space()
{
  printf("          ");
}