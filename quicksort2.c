#include <stdio.h>
int a[100] = { 1, 2, 8, 7, 9, 5, 6, 4, 3, 66, 77, 33, 22, 11 };
 
void prt(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
 
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a; *a = *b; *b = tmp;
}
 
void quick_sort(int a[], int left, int right)
{
    int i = left + 1, j = right;
    int  key = a[left];
 
    if (left >= right) return;
 
    while (1) {
        while (a[i] < key) i++;
        while (a[j] > key) j--;
        if(i >= j) break;
        swap(&a[i],&a[j]);
        if(a[i]==key)j--;
        else  i++;
    }
 
    swap(&a[left],&a[j]);
 
    if(left  < i - 1)   quick_sort(a, left, i - 1);
    if(j + 1 < right)  quick_sort(a, j + 1 , right);
 
}
 
int main(void) {
 
    quick_sort(a, 0, 13);
    prt(14);
 
    return 0;
}
