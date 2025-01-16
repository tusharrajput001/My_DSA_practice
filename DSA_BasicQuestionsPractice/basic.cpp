// fibonacci series

// #include <bits/stdc++.h>
// using namespace std;

// int fibo(int n)
// {
//     // base case
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;

//     // recusrion relation
//     return fibo(n - 1) + fibo(n - 2); // add the last 2 elements from numbers
// }

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         cout << fibo(i) << " ";
//     }
//     return 0;
// }

// factorial

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     if(n == 0 || n == 1) return 1;
//     //recursion realtion
//     return n * fact(n-1);
// }

// int fact(int n){
//     int fact = 1;
//     while(n > 1){
//         fact = fact * n;
//         n--;
//     }
//     return fact;
// }

// int main(){
//     int n = 5;
//     int ans = fact(n);
//     cout << ans ;
//     return 0;
// }

// prime number - the number which has only 2 divisors it is 1 or itself
//  #include <iostream>
//  using namespace std;

// bool isPrime(int n){
//     if(n <= 1) return false;

//     for(int i=2; i<n; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     isPrime(21) ? cout << " true\n" : cout << " false\n";
//     isPrime(17) ? cout << " true\n" : cout << " false\n";
//     return 0;
// }

// print this pattern
//  *
//  **
//  ***
//  ****
//  *****

// #include <iostream>
// using namespace std;

// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=0; j<i; j++){
//             cout << "*" << " ";
//         }
//         cout <<endl;
//     }
// }

// reverse a string

// #include <iostream>
// using namespace std;

// string ReverseString(string str, int s, int e){
//     while(s <= e){
//         // swap(str[s],str[e]);
//         char temp = str[s];
//         str[s] = str[e];
//         str[e] = temp;
//         s++;
//         e--;
//     }
//     return str;

// }

// int main(){
//     string str = "TusharRajput";

//     string revStr = ReverseString(str, 0, str.length()-1);
//     cout << revStr;
//     return 0;
// }

// SELECTION SORT
// #include <bits/stdc++.h>
// using namespace std;

// void Selsort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         int mini = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[mini])
//             {
//                 mini = j;
//             }
//         }
//         swap(arr[mini], arr[i]);
//     }
// }

// int main()
// {
//     vector<int> arr = {5, 12, 23, 45, 223, 4, 45};
//     Selsort(arr);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// Left rotate an array by k Places

#include <bits/stdc++.h>
using namespace std;

// void LeftRotate(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     if (n == 0)
//         return;
//     // Optimize the k moves
//     k = k % n;
//     if (k > n)
//     {
//         return;
//     }
//     // temp arr
//     int temp[k];

//     // store first k elements into the temp array
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = arr[i];
//     }

//     // now move the rest elements to front
//     for (int i = k; i < n; i++)
//     {
//         arr[i - k] = arr[i]; // arr[0] = arr[3] , arr[1] = arr[4]
//     }

//     // now put the temp arr to end of og array
//     for (int i = n - k; i < n; i++)
//     {
//         arr[i] = temp[i - n + k]; // arr[n-k] = temp[n-k - n+k]
//     }
// }

// optimal
//  void Reverse(vector<int> &arr, int s, int e){
//      while(s <= e){
//          int temp = arr[s];
//          arr[s] = arr[e];
//          arr[e] = temp;
//          s++;
//          e--;
//      }
//  }

// void LeftRotate(vector<int> &arr, int k){
//     int n = arr.size();
//     Reverse(arr, 0 , k-1);
//     Reverse(arr,k, n-1);
//     Reverse(arr,0, n-1);
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
//     int k = 3;
//     cout << "before Rotation" << endl;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     LeftRotate(arr, k);
//     cout << "After Rotation" << endl;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// Maximum Concecutive ones
// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int cnt = 0;
//         int maxi = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] == 1){
//                 cnt++;
//             }
//             else{
//                 cnt = 0;
//             }
//             maxi = max(maxi, cnt);
//         }

//         return maxi;
//     }
// };

//missing number
// #include <bits/stdc++.h>
// using namespace std;

// int FindMissingNumber(vector<int> &arr)
// {
//     int n = arr.size();
//     // addition upto nelements
//     int sum1 = (n * (n + 1) / 2);

//     // addition of array elements
//     int sum2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum2 += arr[i];
//     }

//     int missingNum = sum1 - sum2;
//     return missingNum;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 0, 5};
//     int MissingNumber = FindMissingNumber(arr);
//     cout << MissingNumber << endl;
//     return 0;
// }
