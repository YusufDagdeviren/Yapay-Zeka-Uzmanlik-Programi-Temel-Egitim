#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
/*
Best Case = ~n V O(n)
Worst Case = ~(n^2/2) V O(n^2)
*/
void insertionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n ; i++)
    {
        for (j = i; j > 0; j--)
        {
            if (arr[j] < arr[j-1])
            {
                swap(&arr[j], &arr[j-1]);
            }
            else
            {
                break;
            }
        }
    }
}

int main(void)
{
    int dimension = 4;
    int arr[] = {7, 10, 5, 3};
    insertionSort(arr, dimension);

    // Print sorted array
    for (int i = 0; i < dimension; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}