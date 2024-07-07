// BRUTE FORCE

// #include <iostream>
// using namespace std;

// void Rotatetoright(int arr[], int n, int k)
// {
//     // reduce the k
//     k = k % n;
//     // store in temp
//     int temp[k];
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = arr[i];
//     }

//     // shift og array
//     for (int i = k; i < n; i++)
//     {
//         arr[i - k] = arr[i];
//     }

//     // put back temp to end
//     int j = 0;
//     for (int i = n - k; i < n; i++)
//     {
//         arr[i] = temp[j];
//         j++;
//     }
// }

// int main()
// {
//     int n = 7;
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;
//     Rotatetoright(arr, n, k);
//     cout << "After Rotating the elements to right " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// OPTIMAL APPROACH
#include <bits/stdc++.h>
using namespace std;

void Rotateeletoright(int arr[], int n, int k)
{
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    Rotateeletoright(arr, n, k);
    cout << "After Rotating the k elements to right ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}