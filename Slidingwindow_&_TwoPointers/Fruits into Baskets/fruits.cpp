//Bruteforce Approach  TC-> O(N2) , SC-> O(N log n)

#include <bits/stdc++.h>
using namespace std;

// int FruitsIntoBaskets(vector<int> arr)
// {
//     int n = arr.size();
//     int maxLen = 0;
//     for (int i = 0; i < n; i++)
//     {
//         set<int> st;
//         for (int j = i; j < n; j++)
//         {
//             st.insert(arr[j]);

//             if (st.size() <= 2)
//             {
//                 maxLen = max(maxLen, j - i + 1);
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }

//     return maxLen;
// }

// int main()
// {
//     vector<int> arr = {3,3,3,1,2,1,1,2,3,3,4};
//     int MaxNum = FruitsIntoBaskets(arr);
//     cout << "Max Fruits in 2 baskets we can put : " << MaxNum;
//     return 0;
// }


// OPTIMAL APPROACH (SLIDING WINDOW PATTERN)  O(2N)

int FruitsIntoBaskets(vector<int>& arr){
    int k = 2;
    int l=0, r=0, maxLen=0;
    map<int,int> mpp;

    while (r < arr.size())
    {
        mpp[arr[r]]++;

        if(mpp.size() > k){
                mpp[arr[l]]--;
                if(mpp[arr[l]] == 0){
                    mpp.erase(arr[l]);
                }
                l++;
        }
        if(mpp.size() <= k){
            maxLen = max(maxLen, r - l + 1);
        }
        r++;
    }
    return maxLen;
    
}


int main()
{
    vector<int> arr = {3,3,3,1,2,1,1,2,3,3,4};
    int MaxNum = FruitsIntoBaskets(arr);
    cout << "Max Fruits in 2 baskets we can put : " << MaxNum;
    return 0;
}