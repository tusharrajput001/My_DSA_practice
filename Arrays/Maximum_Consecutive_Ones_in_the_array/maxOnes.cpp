#include <iostream>
using namespace std;

int MaxConOnes(int arr[], int n){
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 1){
            count++;
            max_count = max(max_count, count);
        }
        else{
            count = 0;
        }

    }
    cout << max_count;
    
}




int main(){
    int n = 6;
    int arr[n] = {1, 1, 0, 1, 1, 1};
    MaxConOnes(arr, n);
}