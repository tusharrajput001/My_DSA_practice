// BRUTEFORCE

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 7;
//     int arr[n] = {1, 1, 2, 3, 3, 4, 4};

//     for (int i = 0; i < n; i++)
//     {
//         int num = arr[i];
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == num)
//             {
//                 cnt++;
//             }
//         }
//         if (cnt == 1)
//         {
//             cout << num;
//         }
//     }
// }

// Using Hashing (Better approach)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 7;
//     int arr[n] = {1, 1, 2, 3, 3, 4, 4};

//     int maxi = arr[0]; // assuming max to 0th element

//     for (int i = 0; i < n; i++)
//     {
//         maxi = max(maxi, arr[i]);   // getting max element
//     }

//     int hash[maxi+1] = {0};  // creating hash of max element

//     for (int j = 0; j < n; j++)
//     {
//         hash[arr[j]]++;    // adding every element count to hash
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (hash[arr[i]] == 1)   // finding if any hashvalue is 1 then print
//         {
//             cout << arr[i];
//             break;
//         }
//     }
// }

// Using Map (Optimal approach)

#include <bits/stdc++.h>
using namespace std;
#include <map>

int main()
{
    int n = 7;
    int arr[n] = {1, 1, 2, 3, 3, 4, 4};

    map<int, int> mpp; // map creation

    for (int j = 0; j < n; j++)
    {
        mpp[arr[j]]++; // adding every element count to map
    }

    // it.first is key and it.second is value if value of any key is 1 then print
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            cout << it.first;
        }
    }
}