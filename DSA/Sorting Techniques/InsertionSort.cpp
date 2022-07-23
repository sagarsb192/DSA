// Write a cpp program to implement Insertion sort
#include <bits/stdc++.h>
using namespace std;
// Time complexity is O(n^2)
/*Here we are thinking that the first half is already sorted.
So we are starting from second block and checking if the second element with its previous blocks and if the
conditions satisfies we assign the previous block value to its next block and go till starting block and
place the perfect element over there*/

/*Example : 9 5 7 1 2
now we take second element 5 and compare it with the previous block element that is 9.
Since 9 is greater we replace 5 with 9 and we move to previous value before 9 since there is no element before 9,
We place 5 over there.

Now our array will be ===> 5 9 7 1 2 ,

Now we select 7 and check it with its previous elements since 9 is greater than 7 we replace 7 with 9,
Now we compare 7 and 5 since 7 is greater we place that value at 9's place that is after 5

Now our array will be ===> 5 7 9 1 2 ,

Now we select 1 and compare with 9 since 9 is greater we place 9 at 1's place,
again we check it with 7 since 7 is also greater than 1 we move 7 forward after we compare with 5,
since 5 is also greater than 1 we move 5 forward and since there are no elements left we place 1 over there.

Now our array will be ===> 1 5 7 9 2 ,

Now we select 2 and compare with its previous elements,
 and finally we get ===> 1 2 5 7 9,
*/
void InsertionSort(int arr[], int n)
{
    int temp = 0, j = 0;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
    InsertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}