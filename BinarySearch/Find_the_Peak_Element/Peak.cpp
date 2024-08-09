// BRUTE FORCE APPROACH (0(N), O(1))
// #include <bits/stdc++.h>
// using namespace std;

// int findPeakElement(vector<int> &arr)
// {
//     int n = arr.size();

//     for (int i = 0; i < n; i++)
//     {
//         if ((i == 0 || arr[i - 1] < arr[i]) && (i == n - 1 || arr[i] > arr[i + 1]))
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
//     int ans = findPeakElement(arr);
//     cout << "The peak is at index: " << ans << "\n";
//     return 0;
// }

// OPTIMAL APP USING BS

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr)
{
    int n = arr.size();

    // we will check for manual cases
    if (n == 1)
        return 0;
    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;

    // after checking the manual cases i can say my search space is trimmed down

    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        // at first i will check what if my mid id peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        // now check is our left part is in increasing order it means left part doesn't contain the peak just eliminate it
        else if (arr[mid] > arr[mid - 1])
        {
            low = mid + 1;
        }
        // either our right part is in decreasing order
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(arr);
    cout << "The peak is at index: " << ans << "\n";
    return 0;
}