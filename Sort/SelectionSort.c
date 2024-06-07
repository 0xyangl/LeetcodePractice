#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int A[5] = {6,2,7,9,3};
    int count = 5;
    int temp = 0;
    printf("array before sorting\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",A[i]);
    }
    int min_num = 0;
    printf("\n");

    //SelectionSort
    //best case = O(n^2)
    //avg case = O(n^2)
    //worst case = O(n^2)
    //spacecomplexity = O(1)
    for (int i = 0; i < count; i++)
    {
        min_num = i;
        for (int j = i + 1; j < count; j++) 
        {
            if (A[j] < A[min_num]) //The most important things in SelectionSort is to find the smallest number in the array each row
            {                      
                min_num = j;
            }
            
        }
        if (min_num != i)  //check if the smallest number have changed or not, if changed that means there's a number smaller than number in i'th position
        {
            temp = A[min_num];
            A[min_num] = A[i];
            A[i] = temp;
            temp = 0;
        }
    }
    printf("array after sorting\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}