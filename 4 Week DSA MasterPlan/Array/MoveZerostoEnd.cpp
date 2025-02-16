#include <bits/stdc++.h>
using namespace std;

void MoveZerosToEnd(vector<int> &arr, int n)
{   
    int start = 0;
    int end = n - 1;
    while(start <= end){
        if (arr[start] == 0)
        {
            swap(arr[start], arr[end]);
            end--;
            start++;
        }
        else{
            start++;
        }
    }
}

int main()
{
    vector<int> arr = {12, 3, 4, 5, 6, 0, 0, 32, 23, 0, 21, 56};
    int n = arr.size();
    MoveZerosToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}