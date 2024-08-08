#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = high + low / 2;
        // if right part is sorted then the left most item is the smallest 
        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);   
            low = mid + 1;
        } 
        // if the left part is sorted then the left most or mid element is the smallest
        else
        {
            ans = min(arr[mid], ans);
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 11, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}