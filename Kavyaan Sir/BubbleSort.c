#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[5] = {9, 4, 6, 2, 8};
    int i, j, temp;
    printf("Unsorted Array is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    // 2, 4, 6, 8,9
    /*
        i = 3
        j = 4
    */
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted Array is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}