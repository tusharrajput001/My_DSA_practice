// Brute Force Approach    // TC ->  O(N) SC- O(N)

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> moveZeros(int n , vector<int> arr){
//     // temp array
//     vector<int> temp;
    
//     // store non zeros in temp4
//     for (int i = 0; i < n; i++)
//     {
//        if(arr[i] != 0){
//         temp.push_back(arr[i]);
//        }
//     }

//     int nz = temp.size();

//     // store nz in front of arr
//     for (int i = 0; i < nz; i++)
//     {
//         arr[i] = temp[i];
//     }

//     // and left places in arr is zero
//     for (int i = nz; i < n; i++)
//     {
        
//         arr[i] = 0;
//     }

//     return arr;
// }




// int main(){
//     vector<int> arr = {1,2,3,0,4,5,0,0};
//     int n = arr.size();
//     vector<int> ans = moveZeros(n, arr);
//     for (auto &it : ans)
//     {
//         cout << it << " ";
//     }
//     cout << '\n';
//     return 0;
// }

// OPTIMAL APPROACH ( Using Two Pointer Approach )  TC- O(N) SC- O(1)


// #include<bits/stdc++.h>
// using namespace std;

// vector<int> moveZeros(int n , vector<int> arr){
//     int j = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] == 0){
//             j = i;
//             break;
//         }
//     }

//     if(j == -1) return arr; 

//     for (int i = j+1; i < n; i++)
//     {
//        if(arr[i] != 0){
//         swap(arr[i], arr[j]);
//         j++;
//        }
//     }
    
//     return arr;
    
// }




// int main(){
//     vector<int> arr = {1,2,3,0,4,5,0,0};
//     int n = arr.size();
//     vector<int> ans = moveZeros(n, arr);
//     for (auto &it : ans)
//     {
//         cout << it << " ";
//     }
//     cout << '\n';
//     return 0;
    

// }
