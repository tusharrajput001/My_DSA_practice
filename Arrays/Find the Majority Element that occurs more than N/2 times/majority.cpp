// #include <bits/stdc++.h>
// using namespace std;

// // Brute Force Approach
// // int majorityElement(vector<int> arr)
// // {
// //     int n = arr.size();

// //     for (int i = 0; i < n; i++)
// //     {
// //         int cnt = 0;

// //         for (int j = 0; j < n; j++)
// //         {
// //             if (arr[j] == arr[i])
// //             {
// //                 cnt++;
// //             }
// //         }

// //         if (cnt > (n / 2))
// //         {
// //             return arr[i];
// //         }
// //     }
// //     return -1;
// // }

// //Better Approach using hashmap

// // int majorityElement(vector<int> arr){
// //     int n = arr.size();

// //     map<int,int> mpp;

// //     for (int i = 0; i < n; i++)
// //     {
// //         mpp[arr[i]]++;
// //     }

// //     for(auto it: mpp){
// //         if(it.second > (n/2)){
// //             return it.first;
// //         }
// //     }

// //     return -1;

// // }

// // Optimal approach

// int majorityElement(vector<int> v) {

//     //size of the given array:
//     int n = v.size();
//     int cnt = 0; // count
//     int el; // Element

//     //applying the algorithm:
//     for (int i = 0; i < n; i++) {
//         if (cnt == 0) {
//             cnt = 1;
//             el = v[i];
//         }
//         else if (el == v[i]) cnt++;
//         else cnt--;
//     }

//     //checking if the stored element
//     // is the majority element:
//     int cnt1 = 0;
//     for (int i = 0; i < n; i++) {
//         if (v[i] == el) cnt1++;
//     }

//     if (cnt1 > (n / 2)) return el;
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }

// BRUTEFORECE APPROACH

// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v)
// {
//     int n = v.size();
//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[j] == v[i])
//             {
//                 cnt++;
//             }
//         }

//         if (cnt > n / 2)
//         {
//             return v[i];
//         }
//     }
// }
// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }

// BETTER APPROACH USING MAP

// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v)
// {
//     int n = v.size();
//     map<int, int> mpp;

//     for (int i = 0; i < n; i++)
//     {
//         mpp[v[i]]++;
//     }

//     for (auto it : mpp)
//     {
//         if (it.second > (n / 2))
//         {
//             return it.first;
//         }
//     }
// }

// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }



