#include<iostream>
using namespace std;


int main(){
    int n = 5;
    int arr[n] = {10,34,42,53,12};
    int k = 3;
    //reduce the k 
    k = k % n;

    // store k values in temp arr
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    // make rest of the elemnts to front 
    for (int i = k; i < n; i++)
    {
        arr[i-k] = arr[i];   // arr[0] = 3el , arr[1] = 4el
    }

    // get elements from temp and paste it after the array
    for (int i = n-k; i < n; i++)
    {
        arr[i] = temp[i-(n-k)];
    }

    // print changed array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    
    
    

}