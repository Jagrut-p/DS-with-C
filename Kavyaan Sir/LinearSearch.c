#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50}, i, search;
    bool flag = false;
    printf("Enter the number to be Searched: ");
    scanf("%d", &search);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == search)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        printf("%d exist at %d", a[i],i+1);
    }
    else
    {
        printf("Element does't exists!!");
    }
}