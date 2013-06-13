#include "util.h"

void selectionsort(int a[], int len)
{
    int i;
    int j;
    int tmp;
    int mini;

    for(i=0; i<len; ++i)
    {
        mini=i;
        for(j=i+1; j<len; j++)
        {
            if(a[j]<a[mini])
            {
                mini=j;
            }
        }
        if(mini != i)
        {
            tmp=a[i];
            a[i]=a[mini];
            a[mini]=tmp;
        }
    }

}

int main(int argc, char* argv[])
{
    int a[10] = {4, 9, 0, 6, 3, -4, 1, 9, 4, 20};
    print(a, 10);
    selectionsort(a, 10);
    print(a, 10);
    return 0;
}
