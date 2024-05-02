#include<iostream>
using namespace std;


int main(){
    int n = 5;
    int arr[n] = {10,34,42,53,12};
    int k = 3;
    k = k % n;
    
    int temp[k];
    for(int i=0; i<k; i++){
        temp[i] = arr[i];
    }
    
    for (int  i = k; i < n; i++)   {
        arr[i-k] = arr[i];
    }
    
    for (int i = n-k; i < n; i++)
    {
       arr[i] = temp[i-(n-k)];
    }
    
    

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;   
}       