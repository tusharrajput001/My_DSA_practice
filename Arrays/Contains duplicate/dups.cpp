#include <bits/stdc++.h>
using namespace std;

// Brute force approach   TC-> O(n2) Sc-> O(1)
// bool CheckDuplicasy(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 return true;
//             }
//         }
//     }

//     return false;
// }

// Better Approach Tc-> O(n) Sc-> O(1)

// bool CheckDuplicasy(vector<int> &arr)
// {
//     int n = arr.size();
//     unordered_set<int> st;
//     for (int n : arr)
//     {
//         if (st.find(n) != st.end())
//         {
//             return true;
//         }
//         st.insert(n);
//     }

//     return false;
// }


//Optimal approach Tc- O(!) sc-> O(1)
bool CheckDuplicasy(vector<int> &arr)
{
    unordered_set<int> st(arr.begin(), arr.end());
    return st.size() < arr.size();
}


int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 1};
    bool check = CheckDuplicasy(arr);
    if (check)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}