#include <stdlib.h>
#include <stdio.h>

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a=10,b=7;
    printf("before swap a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("after swap a=%d,b=%d\n",a,b);
}