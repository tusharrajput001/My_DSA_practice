// BRUTE FORCE APPROACH

// #include <bits/stdc++.h>
// using namespace std;

// int smallestDivisor(vector<int> &arr, int limit)
// {
//     int n = arr.size();
//     int maxi = *max_element(arr.begin(), arr.end());
//     for (int d = 1; d < maxi; d++)
//     {
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += ceil((double)(arr[i]) / (double)(d));
//         }
//         if (sum <= limit)
//         {
//             return d;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int limit = 8;
//     int ans = smallestDivisor(arr, limit);
//     cout << "The minimum divisor is: " << ans << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int> &arr, int limit)
{
    int n = arr.size();
    int maxi = *max_element(arr.begin(), arr.end());
    int low = 1, high = maxi;


    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += ceil((double)(arr[i]) / (double)(mid));
        }
        if (sum <= limit)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        }
    return low;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}