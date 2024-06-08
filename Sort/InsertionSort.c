#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void)
{
    int A[5] = {6,2,7,9,3};
    int count = 5;
    int temp=0;
    printf("array before sorting\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",A[i]);
    }
    int min_num = 0;
    printf("\n");

    //InsertionSort
    //Best case O(n)
    //avg case O(n^2)
    //worst case O(n^2)
    //space complexity O(1)

    for (int i = 1; i < count; i++)
    {
        int j = i - 1;
        int key = A[i];
        while (j>=0 && A[j]>key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
    


    printf("array after sorting\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}