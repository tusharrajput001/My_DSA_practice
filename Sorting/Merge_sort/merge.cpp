#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;   // temp vector

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])    // check which is smaller then push it in temp arr and move the pointers
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    // check for rest of the left on left part
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
        // check for rest of the left on right part
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // then update the arr in sorted order
    for (int i = low; i < high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{   
    // if this case then exit no more partitions required
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, 0, mid); // Divide the left part
    mergeSort(arr, mid + 1, high);  // Divide the right part
    merge(arr, low, mid, high);  // Merge it 
}

int main()
{

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}