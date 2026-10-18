#include <stdio.h>
#include <conio.h>
int main()
{
    /*
        22, 96, 78, 54, 34
    */
    int arr[] = {22, 96, 78, 54, 34};
    int i, j, temp, n = 5, min, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        printf("Phase %d: ", i + 1);
        for (k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}