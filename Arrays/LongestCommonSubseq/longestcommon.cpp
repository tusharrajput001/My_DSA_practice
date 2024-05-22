#include<iostream>
using namespace std;

int main() {
    int n = 10;
    int arr[n] = {1,2,3,1,1,1,1,4,2,3};
    int K = 3;

    int len = 0; // Length of the longest subarray with sum K
    int sum = 0; // Current sum of elements in the window
    int start = 0; // Start index of the current subarray

    for (int end = 0; end < n; end++) {
        sum += arr[end];

        // Shrink the window from the left until the sum is less than or equal to K
        while (sum > K && start <= end) {
            sum -= arr[start];
            start++;
        }

        // Update the length of the longest subarray if the current subarray sum equals K
        if (sum == K) {
            len = max(len, end - start + 1);
        }
    }

    cout << len;
    return 0;
}
