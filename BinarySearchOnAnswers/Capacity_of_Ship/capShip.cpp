// Brute force approach
// #include<bits/stdc++.h>
// using namespace std;

// int FindDays(vector<int>& weights, int cap){
//     int days = 1, load = 0;
//     int n = weights.size();

//     for (int i = 0; i < n; i++)
//     {
//         if(load + weights[i] > cap){
//             days += 1;
//             load = weights[i];
//         }
//         else{
//             load += weights[i];
//         }
//     }
//     return days;

// }

// int leastWeightCapacity(vector<int>& weights, int d){
//     int maxi = *max_element(weights.begin(), weights.end());
//     int sum = accumulate(weights.begin(),weights.end(),0);

//     for (int i = maxi; i < sum; i++)
//     {
//         if(FindDays(weights, i) <= d){
//             return i;
//         }
//     }

//     return -1;

// }

#include <bits/stdc++.h>
using namespace std;

int FindDays(vector<int> &weights, int cap)
{
    int days = 1, load = 0;
    int n = weights.size();

    for (int i = 0; i < n; i++)
    {
        if (load + weights[i] > cap)
        {
            days += 1;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }
    return days;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    int maxi = *max_element(weights.begin(), weights.end());
    int sum = accumulate(weights.begin(), weights.end(), 0);

    int low = maxi , high = sum;
    while(low <= high){
        int mid = (low + high)/2;
        if(FindDays(weights, mid) <= d){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}