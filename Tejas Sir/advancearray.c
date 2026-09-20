#include <stdio.h>
#define SIZE 4
int a[5], temp, value;
int loc, i, flag[5] = {0}, k;
void insert()
{
    int fl = 0;
    printf("Enter the location where you want to insert: ");
    scanf("%d", &loc);
    printf("Enter the element you want to insert: ");
    scanf("%d", &value);
    if (loc >= 0 && loc <= 4)
    {
        printf("");
    }
    else
    {
        printf("Enter a correct place where you want to insert!!");
        return;
    }
    printf("-----------------------------------------------------------\n");
    if (flag[loc] == 0)
    {
        a[loc] = value;
        flag[loc] = 1;
        fl = 1;
    }
    else if (flag[loc] == 1)
    {
        for (k = SIZE; k >= loc; k--)
        {
            if (k != loc)
            {
                a[k] = a[k - 1];
                flag[k] = flag[k - 1];
            }
            else
            {
                a[k] = value;
                flag[loc] = 1;
                fl = 1;
            }
        }
    }
    if (fl == 1)
    {
        printf("Element inserted at Location!\n");
    }
    else
    {
        printf("Entered Location not found!\n");
    }
}
void removeItems(int location)
{
    for (i = location; i < 5; i++)
    {
        a[i] = a[i + 1];
    }
}
void display()
{
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int choice, flag = 1;
    while (flag == 1)
    {
        int loc;
        printf("-----------------------------------------------------------\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Remove\n");
        printf("4. EXIT");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        printf("-----------------------------------------------------------\n");
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Enter the location from which you want to remove: ");
            scanf("%d", &loc);
            removeItems(loc);
        case 4:
            flag = 0;
            break;
        }
    }
}