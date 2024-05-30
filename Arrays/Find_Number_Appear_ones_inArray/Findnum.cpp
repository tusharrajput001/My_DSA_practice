#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Brute force  TC -> O(N square(2))
// int getSingleElement(vector<int> arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         int num = arr[i];
//         int cnt = 0;

//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == num)
//             {
//                 cnt++;
//             }
//         }

//         if (cnt == 1)
//             return num;
//     }
// }

// Better using hashing    (TC -> O(N) )   SC-> O(maxElement + 1)
// int getSingleElement(vector<int> arr){
//     int n = arr.size();

//     // find max value in array
//     int maxi = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         maxi = max(maxi,arr[i]);
//     }

//     // now create hash of max val
//     vector<int> hash(maxi + 1, 0);
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if(hash[arr[i]] == 1){
//             return arr[i];
//         }
//     }

//     return -1;

// }

// Better App 2 using map
// int getSingleElement(vector<int> arr){
//     int n = arr.size();

//     // now create map
//     map<int,int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }

//     for(auto it: mpp){
//         if(it.second == 1)
//             return it.first;
//     }

//     return -1;

// }

// Optiamal approach using XOR  
// In xor = 4 ^ 4 = 0 , 1 ^ 0 = 1 
int getSingleElement(vector<int> arr)
{
    int n = arr.size();
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    vector<int> arr = {4, 2, 7, 4, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}