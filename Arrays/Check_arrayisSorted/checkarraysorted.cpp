// #include <iostream>
// using namespace std;

// int main(){
//     int n = 6;
//     int arr[n]= {1,2,3,4,5,11};
//     bool sorted = false;

//     for(int i=1; i<n; i++){
//         if(arr[i] >= arr[i-1]){
//             sorted = true;
//         }
//         else{
//             sorted = false;
//         }
//     }

//     if(sorted){
//         cout << "Sorted";
//     }
//     else{
//         cout << "not sorted";
//     }

//     return 0;

// }



// OPTIMAL APPROACH


#include <bits/stdc++.h>
using namespace std;

void checkArrSorted(int arr[], int n)
{
    bool isSorted = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            isSorted = true;
        }
        else
        {
            isSorted = false;
        }
    }

    if (isSorted)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }
}

int main()
{
    int n = 4;
    int arr[n] = {12, 24, 33, 96, 13};

    checkArrSorted(arr, n);
}
