// SELECTION SORT IS NOTHING JUST ASSUME THE 1st element to be the smallest then check witch rest all of
// the element if found any smaller than that then just swap it and move on and at the end you will get
// your sorted array.

// TC -> O(N2), SC -> O(1)

#include <bits/stdc++.h>
using namespace std;

int SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        if (min_index != i)
        {
            swap(arr[i], arr[min_index]);
        }
    }
}

int main()
{
    int n = 5;
    int arr[n] = {11, 45, 22, 34, 92};
    cout << "Before Selection sort :" << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    SelectionSort(arr, n);
    cout << "After Selection sort :" << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}