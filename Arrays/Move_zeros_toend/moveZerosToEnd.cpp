// BRUTE
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> moveZeros(int n, vector<int> arr)
// {
//     //create temp vector
//     vector<int> temp;

//     // store nonzero in temp
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             temp.push_back(arr[i]);
//         }
//     }

//     // nz size
//     int nz = temp.size();

//     // move all nz to front in arr
//     for (int i = 0; i < nz; i++)
//     {
//         arr[i] = temp[i];
//     }

//     // rest of the arr is 0
//     for (int i = nz; i < n; i++)
//     {
//         arr[i] = 0;
//     }

//     return arr;
// }

// int main()
// {
//     vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
//     int n = 10;
//     vector<int> ans = moveZeros(n, arr);
//     for (auto &it : ans)
//     {
//         cout << it << " ";
//     }
//     cout << '\n';
//     return 0;
// }

// OPTIMAL

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
        return a;

    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}
