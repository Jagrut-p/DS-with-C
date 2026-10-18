#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5
int cq[SIZE], front = -1, rear = -1, i;
void enQueue(int value)
{
    if (front == -1)
    {
        front = 0;
        rear = 0;
        cq[rear] = value;
    }
    else if (rear == SIZE - 1 && front == 0)
    {
        printf("OVERFLOW");
    }
    else if (rear == front - 1)
    {
        printf("OVERFLOW");
    }
    else if (rear == SIZE - 1 && front != 0)
    {
        rear = 0;
        cq[rear] = value;
    }
    else
    {
        rear++;
        cq[rear] = value;
    }
}
void deQueue()
{
    if (front == -1)
    {
        printf("UNDERFLOW\n");
    }
    else if (rear == front)
    {
        front = -1;
        rear = -1;
    }
    else if (front == SIZE - 1)
    {
        printf(" %d \n", cq[front]);
        front = 0;
    }
    else
    {
        printf(" %d \n", cq[front]);
        front++;
    }
}
void display()
{
    if (front == -1)
    {
        printf("UNDERFLOW");
    }
    else if (front <= rear)
    {
        for (i = front; i <= rear; i++)
        {
            printf(" %d ", cq[i]);
        }
    }
    else if (front > rear)
    {
        for (i = front; i <= SIZE - 1; i++)
        {
            printf(" %d ", cq[i]);
        }
        for (i = 0; i <= rear; i++)
        {
            printf(" %d ", cq[i]);
        }
    }
    printf("\n");
}
int main()
{
    int value, choice;
    while (1)
    {
        printf("1. enQueue \n2. Display \n3. deQueue \n4. EXIT");
        printf("Enter the Choice from above: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value: ");
            scanf("%d", &value);
            enQueue(value);
            break;
        case 2:
            display();
            break;
        case 3:
            deQueue();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter a valid Number");
        }
    }
}