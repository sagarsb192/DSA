// Write cpp program to perform Quick sort
#include <bits/stdc++.h>
using namespace std;
// Time complexity is O(n^2) (Worst Case) and O(nlogn)(Best Cse and Average case)

/*Here we take array , low value and high values as input,
Now we take pivot element as a[low] element and take i=low+1 and j = high,
now we run while loop till i<=j is true,
Inside it we have another while loop it runs till i<=j and also a[i]<=pivot,
it increments i value till the loop runs,

Simillarly if a[j]>pivot we decrement j value till the loop runs,
After that we check i<j if it is true we swap a[i] and a[j],

and Finally we assign a[l] = a[j] and a[j] = pivot and return j value to QuickSort Function,
*/

int Partition(int a[], int l, int h)
{
    int pivot = a[l], i = l + 1, j = h, temp;
    while (i <= j)
    {
        while (i <= j && a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[l] = a[j];
    a[j] = pivot;
    return j;
}

/*In this function we take input as (array , low value and high value (that is size of array - 1)),
we check that the low value is lesser than high or not if condition is true,
We find the pivot value of array from Partition Function,
And pass the values to same function (array, low, pivot-1),
It again comes into the function and check condition and again gets divided,
after it reaches the end it goes to another function call where it passes pivot+1 vlue and high vale,
And this will also go till it reaches the end,

And Final Output will be Printed.
*/

void QuickSort(int arr[], int low, int high)
{
    int p;
    if (low < high)
    {
        p = Partition(arr, low, high);
        QuickSort(arr, low, p - 1);
        QuickSort(arr, p + 1, high);
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
    QuickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}