#include <stdio.h>
#include <conio.h>
void merge(int arr[], int temp[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int x = left;
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[x++] = arr[i++];
        }
        else
        {
            temp[x++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[x++] = arr[i++];
    }
    while (j <= right)
    {
        temp[x++] = arr[j++];
    }
    for (int k = left; k <= right; k++)
    {
        arr[k] = temp[k];
    }
}
void mergeSort(int arr[], int temp[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, temp, left, mid);
        mergeSort(arr, temp, mid + 1, right);
        merge(arr, temp, left, mid, right);
    }
    else
    {
        return;
    }
}
int main()
{
    int temp[5], i;
    int arr[5] = {3, 2, 8, 1, 7};
    mergeSort(arr, temp, 0, 4);
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", arr[i]);
    }
}