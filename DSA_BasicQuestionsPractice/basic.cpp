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

// missing number
//  #include <bits/stdc++.h>
//  using namespace std;

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

// longest subarray with given sum k positives

// #include <bits/stdc++.h>
// using namespace std;

// bruteforce approach
// int longestSubarrayWithSumK(vector<int> &arr, int n, int k)
// {
//     int maxLen = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum == k)
//             {
//                 maxLen = max(maxLen, j - i + 1);
//             }
//         }
//     }
//     return maxLen;
// }

// optimal Approach
// int longestSubarrayWithSumK(vector<int> &arr, int n, int k)
// {
//     int maxLen = 0;
//     long long sum = arr[0];
//     int right = 0, left = 0;

//     while (right < n)
//     {

//         // left pointer
//         while (left <= right && sum > k)
//         {
//             sum -= arr[left];
//             left++;
//         }

//         // checking

//         if (sum == k)
//         {
//             maxLen = max(maxLen, right - left + 1);
//         }

//         // right pointer

//         right++;
//         if (right < n)
//         {
//             sum += arr[right];
//         }
//     }

//     return maxLen;
// }

// int main()
// {
//     vector<int> arr = {1, 1, 2, 1, 2, 3, 4, 4, 5, 3};
//     int n = arr.size();
//     int k = 6;
//     int longestSub = longestSubarrayWithSumK(arr, n, k);
//     cout << longestSub << endl;
//     return 0;
// }

// sort 0 1 2s in an array / Sort colors

// brute - sorting (selection sort, Quick sort, merge sort)
//  Better Approach is - >
// dutch national flag Algorithm
// void SortColors(vector<int> &arr, int n)
// {
//     int low = 0, mid = 0, high = n - 1;
//     while (mid <= high)
//     {
//         if (arr[mid] == 0)
//         {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1)
//         {
//             mid++;
//         }
//         else
//         {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int main()
// {
//     vector<int> arr = {1, 2, 0, 0, 1, 2};
//     int n = arr.size();
//     SortColors(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// majority element > n/2 times

// #include <bits/stdc++.h>
// using namespace std;

// // moore's voting algorithm
// int majorityElement(vector<int> &arr, int n)
// {
//     int cnt = 0;
//     int el;

//     // this is the moores voting algo this gives me the most repeating number in array as el at the end
//     for (int i = 0; i < n; i++)
//     {
//         if (cnt == 0)
//         {
//             cnt = 1;
//             el = arr[i];
//         }
//         else if (el == arr[i])
//             cnt++;
//         else
//             cnt--;
//     }

//     int cnt1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (el == arr[i])
//             cnt1++;
//     }
//     if (cnt1 > (n / 2))
//         return el;
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {2, 2, 2, 4, 1, 8, 4, 2, 2, 2};
//     int n = arr.size();
//     int majority = majorityElement(arr, n);
//     cout << majority << " ";
//     return 0;
// }

// maximum subarray sum

// #include <bits/stdc++.h>
// using namespace std;

// int maxSubarrSum(vector<int> &arr, int n)
// {
//     int maxi = INT_MIN;
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];

//         if (sum > maxi)
//         {
//             maxi = sum;
//         }

//         if (sum < 0)
//         {
//             sum = 0;
//         }
//     }
//     return maxi;
// }

// int main()
// {
//     vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
//     int n = arr.size();
//     int maxSubSum = maxSubarrSum(arr, n);
//     cout << maxSubSum << " ";
//     return 0;
// }

// Pascal Triangle
// variation 1

// #include <bits/stdc++.h>
// using namespace std;

// int nCr(int n, int r)
// {
//     long long res = 1;

//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// int pascalTriangle(int r, int c)
// {
//     int element = nCr(r - 1, c - 1);
//     return element;
// }

// int main()
// {
//     int r = 5; // row number
//     int c = 3; // col number
//     int element = pascalTriangle(r, c);
//     cout << "The element at position (r,c) is: "
//          << element << "n";
//     return 0;
// }



//variation 2 ( print the whole row)



// #include <bits/stdc++.h>
// using namespace std;

// int nCr(int n, int r)
// {
//     long long res = 1;

//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// int pascalTriangle(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         cout <<  nCr(n - 1, i - 1) << " ";    
//     }
// }

// int main()
// {
//     int n = 4;
//     int element = pascalTriangle(n);
//     return 0;
// }


