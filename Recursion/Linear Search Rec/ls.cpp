#include<bits/stdc++.h>
using namespace std;


bool Ls(vector<int> &arr, int n, int k){
    //base case 
    if(arr[0] == k){
        return true;
    }

    if(n == 0){
        return false;
    }

    // processing 
    if(arr[n-1] == k){
        return true;
    }

    // recursion relation
    return Ls(arr, n-1, k);

}




int main(){
    vector<int> arr = {43,22,14,15,46,23};
    int n = arr.size();
    int k = 15;
    bool search = Ls(arr, n, k);
    if(search == arr[0]){
        cout << "Element not in the array";
    }
    if(search){
        cout << "Found element";
    }
    else{
        cout << "Element not found";
    }
    return 0;
}