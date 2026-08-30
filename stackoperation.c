#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5
int TOP = -1, stack[SIZE];
void push(int num)
{
    int val;
    if (TOP == SIZE - 1)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        TOP++;
        stack[TOP] = num;
    }
}
void pop()
{
    if (TOP == -1)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        TOP--;
    }
}
void peak()
{
    printf("\n%d", stack[TOP]);
    printf("\n");
}
void peep()
{
    int index, location;
    printf("Enter the Element to be find: ");
    scanf("%d", &location);
    index = (TOP - location) + 1;
    printf("INDEX %d\n", stack[index]);
}
void display()
{
    int i;
    if (TOP == SIZE - 1)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        for (i = TOP; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
    printf("\n");
}
int main()
{
    int num, choice;
    while (1)
    {
        printf("1. Push\n");
        printf("2. Display\n");
        printf("3. Pop\n");
        printf("4. Peek\n");
        printf("5. Peep\n");
        printf("6. EXIT\n");
        printf("Enter the choice from above: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number to be inserted in arrry: ");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        case 4:
            peak();
            break;
        case 5:
            peep();
            break;
        case 6:
            printf("EXIT");
            exit(0);
        }
    }
}
