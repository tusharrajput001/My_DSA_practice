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

// int longestConSeq(vector<int> arr, int n)
// {
//     int longest = 1;
//     unordered_set<int> st; // unordered set
//     // insert in set
//     for (int i = 0; i < n; i++)
//     {
//         st.insert(arr[i]);
//     }

//     for (auto it : st)
//     {
//         if (st.find(it - 1) == st.end())
//         {
//             int cnt = 1;
//             int x = it;
//             while (st.find(x + 1) != st.end())
//             {
//                 x += 1;
//                 cnt += 1;
//             }
//             longest = max(longest, cnt);
//         }
//     }
//     return longest;
// }

// int main()
// {
//     int n = 9;
//     vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};

//     int ans = longestConSeq(arr, n);
//     cout << "Longest Concecutive sequence in array is : " << ans;
// }

// BRUTE FORCE

// #include <bits/stdc++.h>
// using namespace std;

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

// int longestSuccessiveElements(vector<int> &arr)
// {
//     int n = arr.size();
//     int longest = 1;

//     for (int i = 0; i < n; i++)
//     {
//         int x = arr[i];
//         int cnt = 1;

//         while (linearSearch(arr, x + 1) == true)
//         {
//             x += 1;
//             cnt += 1;
//         }
//         longest = max(longest, cnt);
//     }
//     return longest;
// }

// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestSuccessiveElements(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }

// Better Approach
// #include <bits/stdc++.h>
// using namespace std;

// int longestSuccessiveElements(vector<int> &arr)
// {
//     int n = arr.size();
//     if (n == 0)
//         return 0;

//     int cnt = 0;
//     int lastSmaller = INT_MIN;
//     int longest = 1;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] - 1 == lastSmaller)
//         {
//             cnt += 1;
//             lastSmaller = arr[i];
//         }
//         else if (arr[i] != lastSmaller)
//         {
//             cnt = 1;
//             lastSmaller = arr[i];
//         }
//         longest = max(longest, cnt);
//     }

//     return longest;
// }
// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestSuccessiveElements(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }

// optimal approach

#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int> &a)
{
    int n = a.size();
    if (n == 0)
        return 0;
    int longest = 1;
    unordered_set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
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
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}