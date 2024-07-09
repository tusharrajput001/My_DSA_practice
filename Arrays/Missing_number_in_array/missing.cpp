

// Better Approach using hashing
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 7;
//     int arr[n] = {1, 2, 3, 4, 5, 8, 9};

//     // hash array
//     int hash[n + 1] = {0};

//     // store freq
//     for (int i = 0; i < n - 1; i++)
//     {
//         hash[arr[i]]++;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (hash[i] == 0)
//         {
//             cout << "Missing number is : " << i;
//             break;
//         }
//     }
// }

// Optimal approach
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 7;
//     int arr[n] = {1, 2, 3, 4, 5, 8, 9};

//     int sum = (n * (n + 1)) / 2;

//     int s2 = 0;

//     for (int i = 0; i < n-1; i++)
//     {
//         s2 += arr[i];
//     }

//     int missingNum = sum - s2;
//     cout << missingNum;
// }

// BRUTE FORCE

// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int> a, int n)
// {

//     for (int i = 1; i <= n; i++)
//     {
//         int flag = 0;

//         for (int j = 0; j < n - 1; j++)
//         {
//             if (a[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//             return i;
//     }
//     return -1;
// }

// int main()
// {
//     int N = 5;
//     vector<int> a = {1, 2, 5, 4};
//     int ans = missingNumber(a, N);
//     cout << "The missing number is: " << ans << endl;
//     return 0;
// }

// BETTER APPROACH USING HASHING
// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int> &a, int n)
// {

//     int hash[n + 1] = {0}; // creating empty hash

//     // store arr in hash
//     for (int i = 0; i < n - 1; i++)
//     {
//         hash[a[i]]++;
//     }

//     // check in hash if value is zero at any index then it is the one which is missing
//     for (int i = 1; i <= n; i++)
//     {
//         if (hash[i] == 0)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int N = 5;
//     vector<int> a = {1, 2, 4, 5};
//     int ans = missingNumber(a, N);
//     cout << "The missing number is: " << ans << endl;
//     return 0;
// }

// OPTIMAL APPROACH USING SUMMATION METHOD

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a, int n)
{
    int sum = (n * (n + 1)) / 2;

    int sum2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum2 += a[i];
    }

    int missingNum = sum - sum2;
    return missingNum;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
