#include <bits/stdc++.h>
using namespace std;

int FindMinInarr(vector<int>& arr, int n){
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini  = min(mini, arr[i]);
    }
    return mini;   
}

int FindMaxInarr(vector<int>& arr, int n){
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi  = max(maxi, arr[i]);
    }
    return maxi;
}

int main()
{
    vector<int> arr = {12, 3, 4, 5, 6, 56};
    int n = arr.size();
    int min = FindMinInarr(arr,n);
    int max = FindMaxInarr(arr,n);
    cout << "min : "<< min << endl;
    cout << "max : "<< max;
    return 0;

}