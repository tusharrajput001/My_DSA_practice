// BRUTE FORCE APPROACH

// #include <bits/stdc++.h>
// using namespace std;

// int getLongestSubarray(vector<int> &a, long long k)
// {
//     int n = a.size();
//     int len = 0;

//     for (int i = 0; i < n; i++)
//     {
//         long long sum = 0;
//         for (int j = i; j < n; j++)
//         {
//    
//                 sum += a[k];
//             }
//             if (sum == k)
//             {
//                 len = max(len, j - i + 1);
//             }
//         }
//     }

//     return len;
// }

// int main()
// {
//     vector<int> a = {2, 3, 5, 1, 9};
//     long long k = 10;
//     int len = getLongestSubarray(a, k);
//     cout << "The length of the longest subarray is: " << len << "\n";
//     return 0;
// }




//OPTIMAL APPROACH


#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size();
    int right = 0;
    int left  = 0;
    int maxLen = 0;
    int sum = a[0];

    while(right < n){
        // trim left 
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        // checking for subarr
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }

        // Move to right if still smaller val 
        right++;
        if(right < n){
            sum += a[right];
        }
    }

    return maxLen;
}




int main()
{
    vector<int> a = { -1, 1, 1};
    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
