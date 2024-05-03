#include<iostream>
using namespace std;

int main(){
    int inp;
    int flag =0;
    int n = 5;
    int arr[n]  = {12,34,65,22,83};
    cout<<"Enter number to search -> ";
    cin >> inp;
    cout << endl;

    for(int i=0; i<n; i++){
        if(arr[i] == inp){
            cout << inp << " found at place " << i << " index";
            flag = 1;
        }
    }

    if(flag == 0){
        cout<<"Not found ";
    }

}
