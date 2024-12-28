#include <bits/stdc++.h>
using namespace std;

// bool isSorted(int arr[], int size){
//     //base case
//     if(size == 0 || size == 1){
//         return true;
//     }

//     if(arr[0] > arr[1]){
//         return false;
//     }
//     else{
//         //recursion relation
//         bool remainingPart = isSorted(arr+1, size-1);
//         return remainingPart;
//     }
// }

// int main(){
//     int arr[5] = {1,4,5,6,7};
//     int size = 5;

//     bool ans = isSorted(arr,size);

//     if(ans){
//         cout << "Array sorted" << endl;
//     }
//     else{
//         cout << "Array not sorted" << endl;
//     }

//     return 0;
// }


//sum using recursion 
int ArrSum(vector<int> &arr, int n)
{

    // base case
    if (n == 0)
    {
        return arr[0];
    }
    else
    {
        //recursion relation
        int ans = arr[n] + ArrSum(arr, n - 1);
        return ans;
    }
}

// home work
int main()
{
    vector<int> arr = {3, 2, 5, 1, 7};
    int n = arr.size();
    int sum = ArrSum(arr, n);
    cout << sum << endl;
    return 0;
}