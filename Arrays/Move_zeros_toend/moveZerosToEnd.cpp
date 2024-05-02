


// BRUTE FORCE APPROACH
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n = 8;
//     int arr[n] = {10,0,34,42,0,53,12,0};

//     //step 1  (here temp storing all non-zero values)
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }

//     //step 2  (storing temp values to array from starting)
//     int nz = temp.size();
//     for(int i=0; i<nz; i++){
//         arr[i] = temp[i];
//     }

//     // step 3
//     for (int i = nz; i < n; i++)
//     {
//         arr[i] = 0;
//     }

//     //step 4 print array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
    
    

// }




// OPTIMAL APPROACH


// BRUTE FORCE APPROACH
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 8;
    int arr[n] = {10,0,34,42,0,53,12,0};


    //step 1 if array is zero then it is J;
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    // i = j+1 and if array is not zero than swap with zero
    for (int i = j+1; i < n; i++)
    {
       if(arr[i] != 0){
        swap(arr[i] , arr[j]);
        j++;
       }
    }
    

    //step 4 print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    

}