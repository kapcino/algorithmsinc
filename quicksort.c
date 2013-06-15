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

    while (i <= j)
    {
        while((i <= hi) && a[i]<=pivotValue) i++;
        while((j >= lo) && a[j]>pivotValue) j--;
      
        if(i<=j)
        {
            h=a[i];
            a[i]=a[j];
            a[j]=h;
            i++;
            j--;
        }
    }
  
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
    int a[]={2, 1};
    int lena = sizeof(a)/sizeof(a[0]);
    print(a, lena);
    quicksort2(a, lena);
    print(a, lena);

    int b[]={3, 1, 4, 5, 9, 2, 6, 8, 7 };
    int lenb = sizeof(b)/sizeof(b[0]);
    print(b, lenb);
    quicksort2(b, lenb);
    print(b, lenb);

    int c[]={1, 8, 4, 3, -4, 93, 23, 43, 7};
    int lenc = sizeof(c)/sizeof(c[0]);
    print(c, lenc);
    quicksort2(c, lenc);
    print(c, lenc);

    return 0;
}
