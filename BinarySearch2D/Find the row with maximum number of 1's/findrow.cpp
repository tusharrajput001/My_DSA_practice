// BRUTE FORCE APPROACH
// #include <bits/stdc++.h>
// using namespace std;

// int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
// {
//     int cnt_max = 0;
//     int index = -1;

//     // traverse the matrix:
//     for (int i = 0; i < n; i++)
//     {
//         int cnt_ones = 0;
//         for (int j = 0; j < m; j++)
//         {
//             cnt_ones += matrix[i][j];
//         }
//         if (cnt_ones > cnt_max)
//         {
//             cnt_max = cnt_ones;
//             index = i;
//         }
//     }
//     return index;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
//     int n = 3, m = 3;
//     cout << "The row with maximum no. of 1's is: " << rowWithMax1s(matrix, n, m) << '\n';
// }

// OPTIMAL APPRAOCH

// #include <bits/stdc++.h>
// using namespace std;

// int lower_bound(vector<int> &arr, int n, int x)
// {
//     int low = 0, high = n - 1;
//     int ans = n;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] >= x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
// {
//     int cnt_max = 0;
//     int index = -1;

//     // traverse the matrix:
//     for (int i = 0; i < n; i++)
//     {
//         int cnt_ones = m - lower_bound(matrix[i], m, 1);

//         if (cnt_ones > cnt_max)
//         {
//             cnt_max = cnt_ones;
//             index = i;
//         }
//     }
//     return index;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
//     int n = 3, m = 3;
//     cout << "The row with maximum no. of 1's is: " << rowWithMax1s(matrix, n, m) << '\n';
// }

// rearrange elements by  sign
#include <bits/stdc++.h>
using namespace std;


vector<int> Rearrange(vector<int>&arr, int n){
    int PosIdx=0, NegIdx=1;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {   
        //if +ve
        if(arr[i] > 0){
            ans[PosIdx] = arr[i];
            PosIdx +=2;
        }
        //if -ve
        else{
            ans[NegIdx] = arr[i];
            NegIdx += 2;
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = {1, 11, -2, -32, -21, 3, 2, 5, 4, 33};
    int n = arr.size();
    vector<int> ans = Rearrange(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}