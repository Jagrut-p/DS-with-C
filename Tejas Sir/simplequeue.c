#include <stdio.h>
#include <conio.h>
#define MAX 5
int top = -1, rear = -1;
int arr[MAX];
void enQueue()
{
    int val;
    if (rear == MAX - 1)
    {
        printf("OVERFLOW");
        return;
    }
    else if(top == -1)
    {
        printf("Enter the value to be Inserted: ");
        scanf("%d", &val);
        top = 0;
        rear++;
        arr[rear] = val;
    }
    else
    {
        printf("Enter the value to be Inserted: ");
        scanf("%d", &val);
        rear++;
        arr[rear] = val;
    }
}
void deQueue()
{
    if (top == -1)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        if(rear == top)
        {
            rear = -1;
            top = -1;
        }
        printf("Element Deleted\n");
        top++;
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        for (i = top; i <= rear; i++)
        {
            printf("%d ",arr[i]);
        }
    }
}
int main()
{
    int choice, flag = 1;
    while (flag = 1)
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 4:
            flag = 0;
            break;
        }
    }
}
