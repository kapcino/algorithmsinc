#include <stdio.h>
#define SIZE 5


void init(int *top);
int push(int s[], int *top, int element);
int pop(int s[], int *top);
int full(int *top, const int size);
int empty(int *top);

void init(int *top)
{
    *top = 0;
}

int push(int s[], int *top, int element)
{
    if(full(top, SIZE))
        return -1;
    /*if full or null*/
    s[++(*top)] = element;
    return 0;
}

int pop(int s[], int *top)
{
    if(empty(top)) return -1;
    return s[(*top)--];
}

int full(int *top, const int size)
{
    return (*top == size);
}

int empty(int *top)
{
    return (*top == 0);
}

#include <stdlib.h>

int main()
{
    int top,element;
    int stack[SIZE + 1];

    /* initialize stack */
    init(&top);

    /* push elements into stack */
    while(!full(&top,SIZE))
    {
        element = rand();
        printf("push element %d into stack",element);
        push(stack,&top,element);
        /* press enter to push more */
        getchar();
    }
    printf("stack is full\n");
    getchar();

    /* pop elements from stack */
    while(!empty(&top))
    {
        element = pop(stack,&top);
        printf("pop element %d from stack",element);
        /* press enter to pop more */
        getchar();
    }
    printf("stack is empty\n");

    getchar();
    return 0;
}
