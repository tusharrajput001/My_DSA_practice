
#include <iostream>
using namespace std;

void InsertionSort(int n, int arr[]){
    for(int i=1; i<n; i++){  // checking from 1st element. 
        int temp = arr[i]; // 1st element on temp
        int j = i-1; // prev element on j 
        for(;j>=0; j--){    // compare from before ith element
            if(arr[j] > temp){   // compare 0th and 1st element
                swap(arr[j+1],arr[j]); //then swap
            }
            else{
                break;  // break
            }

        }
        arr[j+1] = temp;  // update temp value
    }
}


int main() {
    int n = 5;
    int arr[n] = {40,12,43,23,56,342};
    cout<<"array before sort : ";
    for(int i=0;i<=n;i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
    InsertionSort(n,arr);
    cout<<"array after sort : ";
    for(int i=0;i<=n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}