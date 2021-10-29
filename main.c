#include <stdio.h>
#include "printing.h"

int main()
{
  int n;

  printf("Enter the no. of letters with space: ");
  scanf("%d",&n);
  
  printf("Enter the letters one by one. Give white space (spacebar) for space.");
  char letters[n];
  
  for (int i = 0; i < n; i++)
  {
    printf("Enter \"%d\"th letter:",i+1);
    scanf("%c", &letters[i]);
  }

  for (int j = 1; j < 7; j++) {
    for (int i = 0; i < n; i++) {
      printing(letters[n],j);
    }
    printf("\n");
  }
  
  return 0;
}
