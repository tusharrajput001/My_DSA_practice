#include <iostream>
using namespace std;


int main(){
    int n = 6;
    int arr[n]= {1,2,3,4,5,11};
    bool sorted = false; 

    for(int i=1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            sorted = true;
        }
        else{
            sorted = false;
        }
    }

    if(sorted){         
        cout << "Sorted";   
    }
    else{
        cout << "not sorted";
    }

    return 0;


}