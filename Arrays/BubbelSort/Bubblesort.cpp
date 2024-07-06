
#include <iostream>
using namespace std;

void SelectionSort(int n, int arr[]){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<= i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    SelectionSort(n,arr);
    cout<<"array after sort : ";
    for(int i=0;i<=n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}