// Brute Force Approach     (TC -> O(n) , SC -> O(n))

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int arr[] = {1, 2, 3, 4, 5};
//     int temp[n];
//     for (int i = 1; i < n; i++)
//     {
//         temp[i-1] = arr[i];
//     }
//     temp[n-1] = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
//     }
//     cout << endl;

// }


// Optimal Approach     (TC -> O(n) , SC -> O(1))

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int arr[] = {1, 2, 3, 4, 5};

//     int temp = arr[0];

//     for (int i = 0; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }

//     arr[n - 1] = temp;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }