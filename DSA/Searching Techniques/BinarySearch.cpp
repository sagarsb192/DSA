// Write a cpp program to perform BinarySearch on an array
#include <bits/stdc++.h>
using namespace std;
// Time complexity is O(lon(n))

/*Here we are given one array and one key to find in the array, if the key is found we return the index,
which is mid + 1 in this case*/

/*Exapmle : arr[] = {10, 20, 30, 40, 50} and Key = 20 ,
So we take low = 0 and high = n-1, mid = (low+high)/2;
We take while loop and place condition low < high,
if we get the key value equal to mid value we return mid+1,
otherwise we check whether the key is less than or greater than mid,
if key is greater we set low = mid+1,
if key is lower than mid we assign high = mid - 1,
and if we don't get the key after completing while loop we return 0 ,
which prints "Element not found".

Here we get mid vale as (0+4)/2 that is index 2, we have 30 in that index,
we check it with key since they are not equal we check the key is greater or lower than mid,
since key is lower than mid we assign high = mid-1,
Now again we find mid = (0+1)/2, which is 1 that is 20 at index 1,
so we check low < high which is true and then we check mid value equal to key since they are equal,
we return the mid + 1,
Because it is the second element in the arraay.

Output ===> Element found at 2
*/

int BinarySearch(int arr[], int n, int k)
{
    int low = 0, high = n - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == k)
        {
            return mid + 1;
        }
        else if (k < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    return 0;
}
int main()
{
    int n, k;
    cout << "Enter the array size :\t";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Key to be searched :\t";
    cin >> k;
    int ans = BinarySearch(arr, n, k);
    if (ans)
    {
        cout << "Element found at " << ans;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}