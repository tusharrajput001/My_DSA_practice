// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void SelectionSort(int n, int arr[]){
    for(int i=0;i<=n-2;i++){// check till n-2
        int min = i;//let min index 1st index
        for(int j=i; j<=n-1; j++){  // loop starts till end
            if(arr[j] < arr[min]){
                min=j;// search for min index
            } 
        }
        //swap with min
        swap(arr[i],arr[min]);
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