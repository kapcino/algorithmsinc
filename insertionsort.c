#include <stdio.h>

void insertionsort(int a[], int len)
{
  int tmp = -1;
  int i = 1;
  int j = -1;
  for(i=1; i<len; ++i)
    {
      for(j=i; j>0 && a[j]<a[j-1]; j--)
	{
	  tmp=a[j];
	  a[j]=a[j-1];
	  a[j-1]=tmp;
	}
    }
}

void print(int a[], int len)
{
  int i;
  for(i=0; i<len; ++i)
    {
      printf("%d ", a[i]);
    }
  printf("\n");
}


int main(int argc, char* argv[])
{
  int a[] = {1, 4, -6, 3, -8, 6 ,4};
  print(a, 7);
  insertionsort(a,7);
  print(a, 7);
  return 0;
}
