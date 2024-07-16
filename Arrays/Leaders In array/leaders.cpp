
// BRUTE FORCE

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> printLeadersBruteForce(int arr[], int n)
// {
//     vector<int> ans;

//     for (int i = 0; i < n; i++)
//     {
//         bool Leader = true;

//         for (int j = i + 1; j < n; j++)
//         {
//             if(arr[j] > arr[i]){
//                 Leader = false;
//                 break;
//             }
//         }

//         if(Leader){
//             ans.push_back(arr[i]);
//         }

//     }

//     return ans;

// }

// int main()
// {

//     // Array Initialization.
//     int n = 6;
//     int arr[n] = {10, 22, 12, 3, 0, 6};

//     vector<int> ans = printLeadersBruteForce(arr, n);

//     for (int i = 0; i < ans.size(); i++)
//     {

//         cout << ans[i] << " ";
//     }

//     cout << endl;
//     return 0;
// }

// OPTIMAL APPROACH

#include <bits/stdc++.h>
using namespace std;

vector<int> printLeaders(int arr[], int n)
{
    vector<int> ans;

    int max = arr[n - 1];
    ans.push_back(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }

    return ans;
}

int main()
{

    // Array Initialization.
    int n = 6;
    int arr[n] = {10, 22, 12, 3, 0, 6};

    vector<int> ans = printLeaders(arr, n);

    for (int i = ans.size() - 1; i >= 0; i--)
    {

        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}
