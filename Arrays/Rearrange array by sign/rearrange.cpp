// #include <bits/stdc++.h>
// using namespace std;

// // Brute Force Approach  TC-> O(N) SC-> O(N)

// // vector<int> RearrangebySign(vector<int> arr)
// // {
// //     int n = arr.size();
// //     vector<int> pos;
// //     vector<int> neg;
// //     for (int i = 0; i < n; i++)
// //     {
// //         if (arr[i] > 0)
// //             pos.push_back(arr[i]);

// //         else
// //             neg.push_back(arr[i]);
// //     }

// //     for (int i = 0; i < n / 2; i++)
// //     {
// //         arr[2 * i] = pos[i];
// //         arr[2 * i + 1] = neg[i];
// //     }

// //     return arr;
// // }

// // Optimal Approach

// // vector<int> RearrangebySign(vector<int> arr)
// // {
// //     int n = arr.size();
// //     vector<int> ans(n, 0);

// //     int posIndex = 0, negIndex = 1;

// //     for (int i = 0; i < n; i++)
// //     {
// //         if (arr[i] > 0)
// //         {
// //             ans[posIndex] = arr[i];
// //             posIndex += 2;
// //         }

// //         else
// //         {
// //             ans[negIndex] = arr[i];
// //             negIndex += 2;
// //         }
// //     }

// //     return ans;
// // }

// // int main()
// // {
// //     int n = 4;
// //     vector<int> arr{1, 2, -4, -5};
// //     vector<int> ans = RearrangebySign(arr);

// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << ans[i] << " ";
// //     }
// // }

// // Varity 2 where we dont have equal positive and negatives

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> RearrangebySign(vector<int> arr)
// {
//     int n = arr.size();
//     vector<int> pos;
//     vector<int> neg;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//             pos.push_back(arr[i]);

//         else
//             neg.push_back(arr[i]);
//     }

//     if (pos.size() > neg.size())
//     {
//         for (int i = 0; i < neg.size(); i++)
//         {
//             arr[2 * i] = pos[i];
//             arr[2 * i + 1] = neg[i];
//         }
//         int index = neg.size() * 2;
//         for (int i = neg.size(); i < pos.size(); i++)
//         {
//             arr[index] = pos[i];
//             index++;
//         }
//     }
//     else
//     {
//         for (int i = 0; i < pos.size(); i++)
//         {
//             arr[2 * i] = pos[i];
//             arr[2 * i + 1] = neg[i];
//         }
//         int index = pos.size() * 2;
//         for (int i = pos.size(); i < neg.size(); i++)
//         {
//             arr[index] = neg[i];
//             index++;
//         }
//     }

//     return arr;
// }

// int main()
// {
//     int n = 6;
//     vector<int> arr{1, 2, -4, -5, 6, 9};
//     vector<int> ans = RearrangebySign(arr);

//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// BRUTE

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> RearrangebySign(vector<int> A, int n)
// {
//     vector<int> pos;
//     vector<int> neg;

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] > 0)
//             pos.push_back(A[i]);
//         else
//             neg.push_back(A[i]);
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         A[2 * i] = pos[i];
//         A[2 * i + 1] = neg[i];
//     }

//     return A;
// }

// int main()
// {

//     // Array Initialization.
//     int n = 4;
//     vector<int> A{1, 2, -4, -5};

//     vector<int> ans = RearrangebySign(A, n);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

// OPTIMAL APPROACH

#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int> A)
{
    int n = A.size();
    vector<int> ans(n, 0);

    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
        {
            ans[negIndex] = A[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = A[i];
            posIndex += 2;
        }
    }

    return ans;
}

int main()
{

    // Array Initialisation.

    vector<int> A = {1, 2, -4, -5};

    vector<int> ans = RearrangebySign(A);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}