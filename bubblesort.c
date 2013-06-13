#include "util.h"

void bubblesort(int a[], int len)
{
    int i=-1;
    int j=-1;
    int tmp=-1;
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(a[j]<a[j-1])
            {
                tmp=a[j];
                a[j]=a[j-1];
                a[j-1]=tmp;
            } 
        }
    }
}

int main(int argc, char* argv[])
{
    int a[10] = {0, 3, -1, -4, 6, 9, 3, 0, 2, -7};
    print(a, 10);
    bubblesort(a, 10);
    print(a, 10);

    return 0;
}
