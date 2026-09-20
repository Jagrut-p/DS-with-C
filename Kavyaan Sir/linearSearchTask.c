#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5], i, search, count = 0;
    printf("Enter the numbers in Array: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    for (i = 0; i < 5; i++)
    {
        count++;
        if (search == a[i])
        {
            break;
        }
    }
    printf("No of time it has compared: %d", count);
    return 0;
}