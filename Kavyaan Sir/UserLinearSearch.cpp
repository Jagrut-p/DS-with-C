#include <stdio.h>
#include <stdbool.h>
int main()
{
    int search, x, i, a[100], k;
    bool flag = false;
    printf("Enter the number of elements in list: ");
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    for (i = 0; i < x; i++)
    {
        if (search == a[i])
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        printf("%d exists at %d", a[i], i+1);
    }
    else
    {
        printf("Element doesn't exists");
    }
}