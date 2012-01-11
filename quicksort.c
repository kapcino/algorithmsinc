#include "util.h"

void quick_sort(int a[], int lo, int hi)
{
  int i=lo, j=hi, h;
  int pi=lo+(hi-lo)/2;

  do
    {
      while(a[i]<a[pi]) i++;
      while(a[j]>a[pi]) j--;

      if(i<=j)
	{
	  h=a[i];
	  a[i]=a[j];
	  a[j]=h;
	  
	  i++;
	  j--;
	}
    } 
  while(i<=j);
    
  if(lo<j) quick_sort(a, lo, j);
  if(i<hi) quick_sort(a, i, hi);
}

void quicksort(int a[], int len)
{
  quick_sort(a, 0, len-1);
}



int partition(int a[], int lo, int hi)
{
  int i=lo, j=hi, h;
  int pivotValue=a[lo];

  do
    {
      while(a[i]<=pivotValue) i++;
      while(a[j]>=pivotValue) j--;
      
      if(i<=j)
	{
	  h=a[i];
	  a[i]=a[j];
	  a[j]=h;
	  i++;
	  j--;
	}
    }
  while(i<=j);
  
  a[lo]=a[j];
  a[j]=pivotValue;

  return j;
}

void recursive_quicksort(int a[], int lo, int hi)
{
  int pivot;
  if(lo < hi)
    {
      pivot = partition(a, lo, hi);
      printf("%d\n", pivot);
      recursive_quicksort(a, lo, pivot-1);
      recursive_quicksort(a, pivot+1, hi);
    }
}

void quicksort2(int a[], int len)
{
  recursive_quicksort(a, 0, len-1);
}


int main(int argc, char* argv[])
{
  int a[]={1, 8, 4, 3, -4, 93, 23, 43, 7};
  int len = sizeof(a)/sizeof(a[0]);
  print(a, len);
  quicksort2(a, len);
  print(a, len);

  return 0;
}
