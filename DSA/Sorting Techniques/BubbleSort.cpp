// Write a cpp program to perform Bubble sort
#include <bits/stdc++.h>
using namespace std;
// Time complexity is O(n^2)
/*Here we have to move the largest element to the last block and fix there
 and we have to iterate only till the fixed block before block */
/* Example : 9 7 5 1 2 ,
Now we compare the first element with each element and find the largest one,
since 9 is the largest so we place 9 at the end block,

Now our array will be ===> 7 5 1 2 9 ,

Now we compare the elements again from start and place it before last block that is before 9,
since we are not including 9, so 7 will be the largest element so we place it before 9

Now our array will be ===> 5 1 2 7 9,

Now we compare the elements again from start and place it before 7,
since we are not including 9 and 7, so 5 will be the largest element so we place it before 7

Now our array will be ===> 1 2 5 7 9,

Since the array is already sorted it will not implement any operations and that is the output,

Final Output ===> 1 2 5 7 9 ,
*/
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}