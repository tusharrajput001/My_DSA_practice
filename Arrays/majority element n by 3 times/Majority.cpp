// BRUTE FORCE

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majorityElement(vector<int> v)
// {
//     int n = v.size();

//     vector<int> ls;

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

//         if (cnt > (n / 3))
//         {
//             ls.push_back(v[i]);
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

// Better Approach

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v)
{
    int n = v.size();
    vector<int> ls;
    map<int, int> mpp;

    int mini = (int)(n / 3) + 1;
    for (int i = 0; i < n; i++)
    {
        mpp[v[i]]++;
        if (mpp[v[i]] == mini)
        {
            ls.push_back(v[i]);
        }

        if (ls.size() == 2)
            break;
    }

    return ls;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}