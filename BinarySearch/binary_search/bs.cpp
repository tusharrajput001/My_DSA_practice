
// #include <bits/stdc++.h>
// using namespace std;

// int binarySearch(int arr[], int low, int high, int k)
// {
//     while (low <= high)
//     {
//         int mid = high + low / 2;

//         if (arr[mid] == k)
//         {
//             return mid;
//         }

//         if (arr[mid] < k)
//         {
//             low = mid + 1;
//         }

//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {2, 4, 6, 12, 13, 14, 15, 22, 30};
//     int k = 22;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int res = binarySearch(arr, 0, n - 1, k);
//     if (res == -1)
//         cout << "Element not present in array";
//     else
//         cout << "Element is present at index " << res;
//     return 0;
// }

// BS using Recursive

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int k)
{
    if (low > high)
    {
        return -1;
    }

    int mid = high + low / 2;
    if (arr[mid] == k)
    {
        return mid;
    }
    else if (k > arr[mid])
    {
        binarySearch(arr, mid + 1, high, k);
    }
    else
    {
        binarySearch(arr, low, mid - 1, k);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 12, 13, 14, 15, 19, 22};
    int k = 22;
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = binarySearch(arr, 0, n - 1, k);
    if (res == -1)
        cout << "Element not present in array";
    else
        cout << "Element is present at index " << res;
    return 0;
}