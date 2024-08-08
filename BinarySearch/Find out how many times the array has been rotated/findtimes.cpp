// BRUTEFORCE

// #include <bits/stdc++.h>
// using namespace std;

// int findTimes(vector<int>& arr){

//     int ans = INT_MAX, index = -1;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i] < ans){
//             ans = arr[i];
//             index = i;
//         }
//     }
//     return index;

// }

// int main()
// {
//     vector<int> arr = {5, 6, 7, 1, 1, 1, 2, 4};
//     int ans = findTimes(arr);
//     cout << "The arr is roated: " << ans << "Times. "<< "\n";
//     return 0;
// }



// OPTIMAL APPROACH USING BS   (TC-> O(log N)))

#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    int index = -1;

    while (low <= high)
    {
        int mid = low + high / 2;
        // if the current search space is sorted
        if (arr[low] <= arr[high])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }

        // if the left part is sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            // eliminate then
            low = mid + 1;
        }
        // else right part is sorted
        else
        {
            if (arr[mid] <= arr[high])
            {
                if (arr[mid] < ans)
                {
                    index = mid;
                    ans = arr[mid];
                }
                // then eliminate
                high = mid - 1;
            }
        }
    }

    return index;
}

int main()
{
    vector<int> arr = {4, 5, 6, 0, 0, 1, 2, 3};
    int ans = findKRotation(arr);
    cout << "The array is rotated " << ans << " times.\n";
    return 0;
}