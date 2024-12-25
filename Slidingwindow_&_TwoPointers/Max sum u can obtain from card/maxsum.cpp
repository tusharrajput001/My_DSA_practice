#include <bits/stdc++.h>
using namespace std;

int maxSumcards(vector<int> &arr, int k)
{
    int lsum = 0, rsum = 0, maxSum = 0;
    int n = arr.size();
    // initially we are gonna take the full window from left and store the max
    for (int i = 0; i <= k - 1; i++)
    {
        lsum += arr[i];
    }
    maxSum = lsum;

    int rindex = n - 1;
    // slide window and check for maxsum
    for (int i = k - 1; i >= 0; i--)
    {
        lsum -= arr[i];      // remove element from left
        rsum += arr[rindex]; // add element from right
        rindex--;            // expand right pointer

        maxSum = max(maxSum, lsum + rsum);
    }

    return maxSum;
}

int main()
{
    vector<int> arr = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int k = 4;
    int MaxSum = maxSumcards(arr, k);
    cout << MaxSum;
    return 0;
}