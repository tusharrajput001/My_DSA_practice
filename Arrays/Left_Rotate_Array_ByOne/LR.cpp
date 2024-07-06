// Brute Force Approach     (TC -> O(n) , SC -> O(n))

// #include<bits/stdc++.h>
// using namespace std;

// void solve(int arr[], int n){

//     int temp[n];
//     for (int i = 1; i < n; i++)
//     {
//         temp[i-1] = arr[i];
//     }
//     temp[n-1]= arr[0];

//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
//     }
//     cout << endl;

// }

// int main() {
//   int n=5;

//   int arr[]= {1,2,3,4,5};
//   solve(arr, n);
// }

// Optimal Approach     (TC -> O(n) , SC -> O(1))

#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int temp = arr[0];

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;

    int arr[] = {1, 2, 3, 4, 5};
    solve(arr, n);
}


