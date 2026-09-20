#include <stdio.h>
#include <conio.h>
#define MAX 5
void swap();
int num;
int a[5] = {10, 20, 30, 40, 50};
int main()
{
    int i, j;
    printf("Array Element are: \n");
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Enter the element which you want to bring at first Position: ");
    scanf("%d", &num);
    while (a[0] != num)
    {
        swap();
    }
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", a[i]);
    }
}
void swap()
{
    // int temp, i = 0;
    // temp = a[0];
    // while (i < 5)
    // {
    //     a[i] = a[i + 1];
    //     if (i == 4)
    //     {
    //         a[i] = temp;
    //     }
    //     i++;
    // }
    int temp, i = 4;
    temp = a[4];
    while (i >= 0)
    {
        if (i == 0)
        {
            a[i] = temp;
            break;
        }
        a[i] = a[i - 1];
        i--;
    }
}