#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int n) {
    if (n == 0) return 0; // Edge case: no prices given

    int mini = prices[0];
    int profit = 0;

    for (int i = 1; i < n; i++) {
        int cost = prices[i] - mini;
        profit = max(cost, profit);
        mini = min(prices[i], mini);
    }

    return profit;
}

int main() {
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxProfitValue = maxProfit(arr, n);
    cout << "The maximum profit is: " << maxProfitValue << endl;
    return 0;
}
