#include <stdio.h>
#define SIZE 5
int a[5];
void scan();
void display();
void scan()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter the element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void display()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    scan();
    display();
    return 0;
}