// BRUTE FORCE APPROACH
#include <bits/stdc++.h>
using namespace std;

// bool linearSearch(vector<int> &arr, int num)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == num)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int longestConSeq(vector<int> arr, int n)
// {
//     int longest = 1;   // lets assume longest be 1.
//     for (int i = 0; i < n; i++)
//     {
//         int x = arr[i];      // select first index.
//         int cnt = 1;         // let count 1.

//         while (linearSearch(arr, x + 1) == true)    // if we found some consecutive.
//         {
//             x = x + 1;
//             cnt += 1;
//         }

//         longest = max(longest, cnt);
//     }
//     return longest;
// }

// Better Approach

// int longestConSeq(vector<int> arr, int n){
//     sort(arr.begin(), arr.end());  // sort
//     int lastSmaller = INT_MIN;     
//     int cnt = 0;
//     int longest = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] - 1 == lastSmaller){         // if we found some concecutiveness 
//             cnt += 1;
//             lastSmaller = arr[i];
//         } 
//         else if(lastSmaller != arr[i]){         // it is not equal to lastSmaller and not -1 then it is diff.
//             cnt = 1;
//             lastSmaller = arr[i];
//         }
//         longest = max(longest, cnt);
//     }
//     return longest;
    
// }

// Optimal Approach

int longestConSeq(vector<int> arr, int n){
    int longest = 1;
    unordered_set<int> st;   // unordered set
    // insert in set
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x += 1;
                cnt += 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;



    
}












int main()
{
    int n = 9;
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};

    int ans = longestConSeq(arr, n);
    cout << "Longest Concecutive sequence in array is : " << ans;
}