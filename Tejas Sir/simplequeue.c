/* */
#include <stdio.h>
#include <conio.h>
int top = -1, rear = -1;
int arr[5], MAX = 5;
int main()
{
    cout<<"1. Enqueue\n"
/*1,2,3,4,5

*/
void enQueue()
{
    int val;
    if (top == MAX - 1)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Enter the value to be Inserted: ");
        scanf("%d", &val);
        top = 0;
        rear++;
        arr[rear] = val;
    }
}
void deQueue()
{
    if (top == -1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        printf("Element Deleted");
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
        for (i = top; i < rear; i++)
        {
            printf(arr[i]);
        }
    }
}
