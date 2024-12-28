#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int k)
{       
        //base case
        if(low > high){
            return -1;
        }

        int mid = high + low / 2;

        if(arr[mid] == k){
            return mid;
        }

        if (arr[mid] < k)
        {
            return binarySearch(arr,mid+1,high,k);
        }

        else
        {
            return binarySearch(arr,0, mid-1, k);
        }

}

int main()
{
    int arr[] = {2, 4, 6, 12, 13, 14, 15, 22, 30};
    int k = 13;
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = binarySearch(arr, 0, n - 1, k);
    if (res == -1)
        cout << "Element not present in array";
    else
        cout << "Element is present at index " << res;
    return 0;
}