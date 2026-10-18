#include <iostream>
#include <conio.h>
using namespace std;
void countRangeSum(int nums[], int no, int lower, int upper);
int nums[100], lower, upper;
int main()
{
    int no, i;
    cout << "Enter the number of value to be entered in array: ";
    cin >> no;
    cout << "Enter the Lower Limit: ";
    cin >> lower;
    cout << "Enter the Upper Limit: ";
    cin >> upper;
    for (i = 0; i < no; i++)
    {
        cout << "a[" << i << "]";
        cin >> nums[i];
    }
    countRangeSum(nums, no, lower, upper);
}
void countRangeSum(int nums[], int no, int lower, int upper)
{
    int i, count = 0;
    for (i = 0; i < no; i++)
    {
        if ((lower >= nums[i]) && (nums[i] <= upper))
        {
            count++;
        }
    }
    for (int j = 0; j < no; j++)
    {
        for (int k = j + 1; k < no; k++)
        {
            if ((nums[j] + nums[k]) >= lower && (nums[j] + nums[k]) <= upper)
            {
                count++;
            }
        }
    }
}