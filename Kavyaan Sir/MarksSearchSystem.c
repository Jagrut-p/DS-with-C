/*
**Linear Search + Binary Search Combined**

**Task: Student Marks Search System**

Create a C/C++ program that stores the marks of N students in an array and allows the user to search for a particular mark using **both Linear Search and Binary Search**.

**Requirements**

1. Ask the user to enter N.
2. Input N marks into an array.
3. Display the original array.
4. Search for a given mark using Linear Search.
* Display whether the mark was found.
* Display its position if found.


5. Sort the array in ascending order.
6. Display the sorted array.
7. Search for the same mark using Binary Search.
* Display whether the mark was found.
* Display its position in the sorted array.


8. At the end, display a comparison:
* Linear Search → number of comparisons
* Binary Search → number of comparisons
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void arrayForm();
void linerSearch();
void binarySearch();
int a[50], num, count = 0, count2 = 0;
int main()
{
    int choice, flag = 1;
    while (flag == 1)
    {
        printf("Enter your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            arrayForm();
            break;
        case 2:
            binarySearch();
            break;
        case 3:
            linerSearch();
            break;
        case 4:
            exit(0);
            break;
        }
    }
}

void arrayForm()
{
    int i;
    printf("Enter the number of Marks you want to store in Array: ");
    scanf("%d", &num);
    printf("Enter the Array values: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
}
void linerSearch()
{
    int valsearch, i;
    printf("Enter the Value to be Searched in Array using Linear Search: ");
    scanf("%d", &valsearch);
    for (i = 0; i < num; i++)
    {
        count++;
        if (a[i] == valsearch)
        {
            printf("Index: %d", i + 1, "\n");
            printf("\n");
            break;
        }
    }
    printf("Number of Loops in Linear Search: %d", count, "\n");
    printf("\n");
}
void binarySearch()
{
    int valsearch;
    printf("Enter the Value to be Searched in Array using Binary Search: ");
    scanf("%d", &valsearch);
    int high = num - 1, low = 0, mid;
    while (low <= high)
    {
        count2++;
        mid = (low + high) / 2;
        if (a[mid] == valsearch)
        {
            printf("Value found at: %d", mid, "\n");
            break;
        }
        else if (num > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            low = mid - 1;
        }
    }
    printf("Number of Loops in Binary Search: %d", count2 + 1, "\n");
    printf("\n");
}