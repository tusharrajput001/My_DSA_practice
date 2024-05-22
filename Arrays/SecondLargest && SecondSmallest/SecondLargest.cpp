

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Brute Force Approach
// Second Largest and Smallest using Sorting
// It works only if there are no duplicates

void SecondLandSSort(int arr[], int n)
{
    if (n == 0 && n == 1)
    {
        cout << -1;
    }
    sort(arr, arr + n);
    int SLargest = arr[n - 2];
    int SSmallest = arr[1];
    cout << "Second largest element is : " << SLargest << endl;
    cout << "Second Smallest element is : " << SSmallest << endl;
}

// BETTER APPROACH  (Duplicated values can work )
void SecondLandS(int arr[], int n)
{
    if (n == 0 && n == 1)
    {
        cout << -1;
    }
    int small = INT_MAX, secondSmall = INT_MAX;
    int large = INT_MIN, secondLarge = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] < secondSmall && arr[i] != small)
        {
            secondSmall = arr[i];
        }
        if (arr[i] > secondLarge && arr[i] != large)
        {
            secondLarge = arr[i];
        }
    }

    cout << "Second_Small :" << secondSmall << endl;
    cout << "Second_Large :" << secondLarge << endl;
}

// OPTIMAL APPROACH
void SecondLarge(int arr[], int n)
{
    if (n < 2)
    {
        cout << -1;
    }
    int large = INT_MIN, SecondLarge = INT_MIN;
    int i;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            SecondLarge = large;
            large = arr[i];
        }
        else if (arr[i] > SecondLarge && arr[i] != large)
        {
            SecondLarge = arr[i];
        }
    }
    if (SecondLarge == INT_MIN)
    {
        cout << -1;
    }

    cout << "Second_Large :" << SecondLarge << endl;
}

void secondSmallest(int arr[], int n)
{
    if (n < 2)
        cout << -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }
    if (second_small == INT_MAX)
    {
        cout << -1;
    }
    cout << "Second Smallest : " << second_small;
}

int main()
{
    int n = 6;
    int arr[n] = {12, 35, 1, 10, 34, 1};
    // SecondLandSSort(arr, n);
    // SecondLandS(arr, n);
    SecondLarge(arr, n);
    secondSmallest(arr, n);
}
