#include <stdio.h>

void swap(int *xp, int *yp)
{
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void selectionSort(int arr[], int n)
{
   int i, j, min_idx;

   for (i = 0; i < n - 1; i++)
   {
       min_idx = i;
       for (j = i + 1; j < n; j++)
           if (arr[j] < arr[min_idx])
               min_idx = j;
       if (min_idx != i)
       {
           swap(&arr[min_idx], &arr[i]);
       }
   }
}

int main(void)
{
   int dimension = 4;
   int arr[] = {7,10,5,3};
   selectionSort(arr, dimension);

   // Print sorted array
   for(int i = 0; i < dimension; i++) {
       printf("%d ", arr[i]);
   }

   return 0;
}