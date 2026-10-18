#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, temp, key;
    int arr[5] = {9, 3, 5, 2, 8};
    printf("Unsorted Array\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        key = arr[i]; // 3
        j = i - 1; //9
        //                  9 > 3
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("\nSorted Array\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}