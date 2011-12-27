#include <stdio.h>

void print(int a[], int size)
{
  int i;
  for(i=0; i < size; i++)
    {
      printf("%d\t", a[i]);
    }
  printf("\n");
}


void merge(int a[], int left, int mid, int right)
{
  int i=left;
  int j=mid+1;
  int k=left;
  int b[50];

  while(i<=mid && j<=right)
    {
      b[k++] = (a[j]<a[i]) ? a[j++] : a[i++];
    }

  if(i<=mid)
    {
      b[k++]=a[i++];
    }

  if(j<=right)
    {
      b[k++]=a[j++];
    }

  int ai;
  for(ai=left; ai<=right; ai++)
    {
      a[ai]=b[ai];
    }

}


void m_sort(int a[], int left, int right)
{
  int mid;
  if(right > left)
    {
      mid = (right+left)/2;
      m_sort(a, left, mid);
      m_sort(a, mid+1, right);
      merge(a, left, mid, right);
    }
}

void mergesort(int a[], int size)
{
  m_sort(a, 0, size-1);
}

int main()
{
  int a[6] = {8, 2, 4, 7, 5, 9};
  print(a,6);
  mergesort(a, 6);
  print(a,6);
  return 0;
}
