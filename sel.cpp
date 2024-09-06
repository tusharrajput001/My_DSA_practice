#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void SelectionSort(vector<int> &arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int min_el = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_el])
            {
                min_el = j;
            }
        }

        if (arr[min_el] != arr[i])
        {
            // int temp = arr[i];
            // arr[i]  = arr[min_el];
            // arr[min_el] = temp;
            swap(arr[i], arr[min_el]);
        }
    }
}

int main()
{

    vector<int> arr = {1, 20, 31, 3, 23, 46};
    int n = arr.size();
    cout << "Before Sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // SelectionSort(arr,n);
    BubbleSort(arr, n);
    cout << "After Sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}