// Write a cpp program to implement Linear Search
#include <bits/stdc++.h>
using namespace std;
// Time complexity is O(n)

/*Here we are given one array and one key to find in the array, if the key is found we return the index */

/*Exapmle : arr[] = {10, 20, 30, 40, 50} and Key = 20 ,
So we take one for loop starting from 0 to n-1,
Inside that we place the condtion that if the current element is equal to the key we return the index value,
otherwise we check with next element using for loop, and if we don't get any output we return 0 ,
which prints "Element not found".

Here at 0th index we have 10, we check it with key since they are not equal we move to next element,
now in 1st index we have 20, since both the values are matching we return the index + 1,
Because it is the second element in the arraay.

Output ===> Element found at 2
*/

int LinearSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i + 1;
        }
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
    int ans = LinearSearch(arr, n, k);
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