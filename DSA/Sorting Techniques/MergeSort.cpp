// Write a cpp program to perform merge sort
#include <bits/stdc++.h>
using namespace std;
// Time Complexity is O(nlogn)

/*Here we are using two functions for sorting the array,
1. For dividing the array into small componenets
2. For Merging the divided components in sorted order
*/

/*Here we take (array,low,mid,high) as input for the function,
We take one temperory array b to store the sorted array,
we run the while loop till the condition is true,
Here the condition we check is i<=mid ,where i=low and j<=high ,where j=mid+1,
Inside that we check that arr[i] <= arr[j] if it is true we add arr[i] to b[k] or else arr[j] to b[j],
where k=low, and we increment the i,j,k values according to the condition,

After that we need to re verify that all the elements are entered into the array b,
So we check if j > high,
then we run while loop till i<=mid,
and copy arr[i] to b[k] and increment i and k values,

Simillarly, in else condition we run while loop till j<=high,
and copy arr[j] to b[k] and increment j and k values,

And finally we run a for loop and copy all the array b elements to arr.

And we finally get our Output which will be printed in main function.
*/

void Merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int b[high + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            b[k++] = arr[i++];
        }
        else
        {
            b[k++] = arr[j++];
        }
    }
    if (j > high)
    {
        while (i <= mid)
        {
            b[k++] = arr[i++];
        }
    }
    else
    {
        while (j <= high)
        {
            b[k++] = arr[j++];
        }
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}

/*In this function we take input as (array , low value and high value (that is size of array - 1)),
we check that the low value is lesser than high or not if condition is true,
We find the mid value of array,
And pass the values to same function (array, low, mid),
It again comes into the function and check condition and again gets divided,
after it reaches the end it goes to another function call where it passes mid+1 vlue and high vale,
This will sort another part of the array,
And this will also go till it reaches the end,
And finally all the components of array in passed for merging to Merege function.
*/

void MergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

int main()
{
    int n;
    cout << "Enter the array size :\t";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}