// Write cpp program to implement Selection sort
#include <bits/stdc++.h>
using namespace std;
// Time complexity is O(n^2)

/*Here we take the first element and find the smallest element in the array and swap them,
this process contimues till we reach end of the array*/

/*Example : 9 5 7 1 2 ,
Firstly we have to start one for loop from 0 to n-2,
we also need to store the starting index value in some variable here we have p,
Now we have another for loop starting from previous for loop value + 1 till n-1 that is 1 to n-1,
Here we check for values less than the arr[p] if we found that we store it in p,
this p will be updated everytime we find the lesses value and at value is compared everytime,
by doing this we will get the smallest element in the array,
And finally we swap the starting index with the smallest value index,

Now our array will be ===> 1 5 7 9 2 ,

Now we move futher from starting index 0 to index 1 that is element 5,
we again store the index value in p,
we start the inner for loop from 2 till n-1,
if we get the value lesser than 5 we replace the p value with that elements index value everytime we get the lesser value,
and finally we get the index value of least element we swap it with index value of element 5,

Now our array will be ===> 1 2 7 9 5 ,

Simillarly we do till n-1,

Final Output ===> 1 2 5 7 9 ,
*/

void SelectionSort(int arr[], int n)
{
    int p, j;
    for (int i = 0; i < n - 1; i++)
    {
        p = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[p])
            {
                p = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[p];
        arr[p] = temp;
    }
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
    SelectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}