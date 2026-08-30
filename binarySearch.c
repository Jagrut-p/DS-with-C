#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    int arr[6] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the Element to be Searched: ");
    scanf("%d",&num);
    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == num)
        {
            printf("Element found at ", mid);
            found = 1;
        }
        else if(num > arr[mid])
        {
            low = mid + 1;
        }
        else if(num < arr[mid])
        {
            low = mid - 1;
        }
    }
    if(found == 0)
    {
        printf("Element not there in list!");
    }
}