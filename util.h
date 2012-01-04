#include <stdio.h>


void print(int a[], int len)
{
  int i;
  for(i=0; i<len; ++i)
    {
      printf("%d ", a[i]);
    }
  printf("\n");
}
