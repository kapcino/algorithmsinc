#include "util.h"

void quick_sort(int a[], int lo, int hi)
{
  int i=lo, j=hi, h;
  int pi=lo+(hi-lo)/2;

  do
    {
      while(a[i]<=a[pi]) i++;
      while(a[j]>=a[pi]) j--;

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
  
  h=a[j];
  a[j]=a[pi];
  a[pi]=h;
    
  if(lo<j-1) quick_sort(a, lo, j-1);
  if(j+1<hi) quick_sort(a, j+1, hi);
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
  quicksort(a, len);
  print(a, len);

  return 0;
}
