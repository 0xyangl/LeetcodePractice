#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void)
{
    int A[5] = {6,2,7,9,3};
    int count = 5;
    int temp=0;
    bool end = true;
    printf("array before sorting\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",A[i]);
    }
    int min_num = 0;
    printf("\n");
    
    //BubbleSort
    //best case = O(n)
    //avg case = O(n^2)
    //worst case = O(n^2)
    //spacecomplexity = O(1)
    for (int i = 0; i < count-1; i++) //do at most n-1 round is because in each pass move the largest number to its correct position
    {
        for (int j = 0; j < count - i-1; j++)  //the reason of -i is because there's i position already sorted 
        {
            if (A[j] > A[j+1]) //compare to each number beside
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                end = false;
            }
            
        }
        for (int i = 0; i < count; i++)
        {
            printf("%d ",A[i]);
        }
        printf("\n");
        if(end == true) //if there's no swap occur that means the array is all sorted, Loop can break early
        {
            break;
        }
    }
    


    printf("array after sorting\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}