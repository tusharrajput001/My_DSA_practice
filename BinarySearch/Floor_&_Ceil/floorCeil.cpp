#include <bits/stdc++.h>
using namespace std;

int FindFloor(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] <= x)
        { // it should be less than target so we can say it's a Floor
            ans = arr[mid];

            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int FindCeil(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        { // it should be more than target so we can say it's a Ceil
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> getFloorandCeil(int arr[], int n, int x)
{
    int f = FindFloor(arr, n, x);
    int c = FindCeil(arr, n, x);
    return make_pair(f, c);
}

int main()
{
    int arr[] = {3, 4, 5, 7, 8, 10};
    int n = 6, x = 5;
    pair<int, int> ans = getFloorandCeil(arr, n, x);
    cout << "The Floor is " << ans.first << " " << "and the Ceil is " << ans.second << endl;
    return 0;
}