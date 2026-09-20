/*

*/
#include <stdio.h>
#include <conio.h>
#define MAX 100
int main()
{
    int i, a[MAX], no, search, count = 0, flag = 0;
    printf("Enter the number of Elements in Array: ");
    scanf("%d", &no);
    for (i = 0; i < no; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the Roll No to be Searched: ");
    scanf("%d", &search);
    for (i = 0; i < no; i++)
    {
        count++;
        if (a[i] == search)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        printf("Element not there");
    }
    else
    {
        printf("No of Comparisions Made: [%d]", count);
    }
}