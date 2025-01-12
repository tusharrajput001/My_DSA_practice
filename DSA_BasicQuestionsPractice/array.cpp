#include <bits/stdc++.h>
using namespace std;

vector<int> MoveZerosToEnd(vector<int> &arr)
{
    int n = arr.size();
    int j = -1;

    // find first zero element and assign it to j
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // no zero elements
    if (j == -1)
        return arr;

    // now swap all
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 0, 3, 4, 0, 0, 5};
    MoveZerosToEnd(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}