// #include <bits/stdc++.h>
// using namespace std;

// vector<int> MoveZerosToEnd(vector<int> &arr)
// {
//     int n = arr.size();
//     int j = -1;

//     // find first zero element and assign it to j
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             j = i;
//             break;
//         }
//     }

//     // no zero elements
//     if (j == -1)
//         return arr;

//     // now swap all
//     for (int i = j + 1; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             swap(arr[j], arr[i]);
//             j++;
//         }
//     }

//     return arr;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 0, 3, 4, 0, 0, 5};
//     MoveZerosToEnd(arr);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> UnionOftwoArrays(vector<int> &a, vector<int> &b)
// {
//     int n1 = a.size();
//     int n2 = b.size();
//     vector<int> NewArr;

//     set<int> st;
//     st.insert(a.begin(), a.end());
//     st.insert(b.begin(), b.end());

//     for (auto it : st)
//     {
//         NewArr.push_back(it);
//     }

//     return NewArr;
// }

// int main()
// {
//     vector<int> a = {1, 2, 3, 4, 5, 6};
//     vector<int> b = {1, 2, 3, 7, 8};
//     vector<int> newArr = UnionOftwoArrays(a, b);
//     for (int i = 0; i < newArr.size(); i++)
//     {
//         cout << newArr[i] << " ";
//     }
//     return 0;
// }

// Majority element n/3 times

#include <bits/stdc++.h>
using namespace std;

// vector<int> majorityElement(vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> ls;
//     for (int i = 0; i < n; i++)
//     {
//         if (ls.size() == 0 || ls[0] != arr[i])
//         {
//             int cnt = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 if (arr[j] == arr[i])
//                 {
//                     cnt++;
//                 }
//             }

//             if (cnt > n / 3)
//             {
//                 ls.push_back(arr[i]);
//             }

//             if (ls.size() == 2)
//                 break;
//         }

//         return ls;
//     }
// }

// vector<int> majorityElement(vector<int> &arr)
// {
//     int n = arr.size();
//     vector<int> ls;

//     map<int, int> mpp;

//     int mini = int(n / 3) + 1;

//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;

//         if (mpp[arr[i]] == mini)
//         {
//             ls.push_back(arr[i]);
//         }

//         if (ls.size() == 2)
//             break;
//     }
//     return ls;
// }

// int main()
// {
//     vector<int> arr = {11, 33, 33, 11, 33, 11};
//     vector<int> ans = majorityElement(arr);
//     cout << "The majority elements are: ";
//     for (auto it : ans)
//         cout << it << " ";
//     cout << "\n";
//     return 0;
// }

// find length of longest subarr with 0 sum

// #include <bits/stdc++.h>
// using namespace std;

// int LenOfLng(vector<int> &arr, int n)
// {
//     int maxLen = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = arr[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum == 0)
//             {
//                 maxLen = max(maxLen, j);
//             }
//         }
//     }

//     return maxLen;
// }

// int main()
// {
//     vector<int> arr = {9, -3, 3, -1, 6, -5};
//     int n = arr.size();
//     int LenOfLongestSubArr = LenOfLng(arr, n);
//     cout << LenOfLongestSubArr;
//     return 0;
// }


