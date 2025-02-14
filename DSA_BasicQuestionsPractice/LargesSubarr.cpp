#include <bits/stdc++.h>
using namespace std;

int MaxproductSubarr(vector<int> &arr, int n)
{
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int prod = arr[i];
        for (int j = i+1; j < n; j++)
        {
            maxi = max(maxi, prod);
            prod = prod * arr[j];
        }
        maxi = max(maxi, prod);
    }

    return maxi;
}

int main()
{
    vector<int> arr = {2, 3, -2, 4};
    int n = arr.size();
    int max = MaxproductSubarr(arr, n);
    cout << max;
    return 0;
}