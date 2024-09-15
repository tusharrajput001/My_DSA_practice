// BRUTE FORCE ( TC -> O(N3), SC-> O(1))
// #include <bits/stdc++.h>
// using namespace std;

// int maxSubarraySum(int arr[], int n)
// {
//     int maxi = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k < j; k++)
//             {
//                 sum += arr[k];
//             }

//             maxi = max(maxi, sum);
//         }
//     }
//     return maxi;
// }

// int main()
// {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }

// BETTER APPROACH  (TC -> O(N2), SC-> O(1))

// #include <bits/stdc++.h>
// using namespace std;

// int maxSubarraySum(int arr[], int n)
// {
//     int maxi = INT_MIN; // maximum sum

//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             maxi = max(maxi, sum);
//         }
//     }

//     return maxi;
// }

// int main()
// {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }


// OPTIMAL APPROACH USING KADANE's ALGO


// #include <bits/stdc++.h>
// using namespace std;

// long long maxSubarraySum(int arr[], int n) {
//     long long maxi = LONG_MIN;
//     long long sum =  0;

//     for (int i = 0; i < n; i++)
//     {
//        sum += arr[i];

//        if(sum > maxi ){
//             maxi = sum;
//        }

//        if(sum < 0){
//             sum = 0;
//        }
//     }
//     return maxi;
// }

// int main()
// {
//     int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     long long maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }



