#include "util.h"

void shellsort (int a[], int n) 
{
  int h, i, j, k;
  for (h = n; h /= 2;) 
    {
      printf("h=%d ", h);
      for (i = h; i < n; i++) 
	{
	  printf("i=%d ", i);
	  k = a[i];
	  printf("k=a[i]=%d ", k);
	  for (j = i; j >= h && k < a[j - h]; j -= h) 
	    {
	      printf("\nj=%d ", j);
	      a[j] = a[j - h];
	      printf("a[j]=%d ", a[j]);
	    }
	  a[j] = k;
	  printf("\na[j]=k=%d ", a[j]);
	}
      printf("\n");
    }
}


int main(int argc, char* argv[])
{
  int a[10]={4, 5, 8, 1, -3, 7, 0, -5, 4, 5};
  print(a, 10);
  shellsort(a, 10);
  print(a, 10);
  return 0;
}
