#include <stdio.h>
int main()
{
    int i, j, temp;
    int a[6] = {4, 8, 2, 7, 1, 0};
    printf("\nUnsorted: \n");
    for (i = 0; i < 6; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");

    for (i = 0; i < 6; i++) // i = 1
    {
        j = i - 1;// j = 1
        while (j >= 0 && a[i] < a[j])
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }

    printf("Sorted: \n");
    for (i = 0; i < 6; i++)
    {
        printf(" %d ", a[i]);
    }
}