#include<stdio.h>
#include<conio.h>
void merge(int arr, int temp, int left, int right)
{
    int mid = (left + right)/2;
    merge(arr,temp,left,mid);
    merge(arr,temp,mid+1,right);
    mergeSort(arr,temp,left,mid,right);
}
void mergeSort(int arr, int temp, int left, int right, int mid)
{
    
}
int main()
{
    int arr[5] = {4,1,5,3,9};
}