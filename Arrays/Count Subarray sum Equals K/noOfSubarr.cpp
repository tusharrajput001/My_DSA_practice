#include <bits/stdc++.h>
using namespace std;


// BRUTE FORCE 
// int findAllSubarraysWithGivenSum(vector<int> arr, int k)
// {
//     int n = arr.size();
//     int cnt = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }

//             if (sum == k)
//             {
//                 cnt++;
//             }
//         }
//     }

//     return cnt;
// }

// BETTER APPROACH
int findAllSubarraysWithGivenSum(vector<int> arr, int k)
{
    int n = arr.size();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {  
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
        
            if (sum == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}





int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The no. of subarray is : " << cnt << " ";
    return 0;
}