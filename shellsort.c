#include "util.h"

void shellsort (int a[], int n)
{
  int d, temp, i;
  d=n/2;
  while (d>=1)
    {
      for (i=0;i<n-d;i++)
	{
	  if (a[i]>a[i+d])
	    {
	      temp=a[i];
	      a[i]=a[i+d];
	      a[i+d]=temp;
	    }
	}
      if(d==1)	return;
      d=d/2.0+0.5;
    }
}

void shellsort2(int a[], int n)
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
