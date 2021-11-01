#include <stdio.h>
#include <string.h>
#include "printing.h"

int main()
{
  int n;
  char letters[20];
  printf("Enter the word (less than 20 letters):");
  scanf("%s", letters);
  n = strlen(letters);

  for (int i = 1; i < 7; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printing(letters[j], i);
    }
    printf("\n");
  }

  return 0;
}
