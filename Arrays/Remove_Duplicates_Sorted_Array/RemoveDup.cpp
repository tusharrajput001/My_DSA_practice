// Brute Force Approach

// #include <iostream>
// using namespace std;
// #include<set>

// int main(){
//     int n = 6;
//     int arr[n] = {1, 1, 2, 4, 4, 5};
//     // initialized set
//     set<int>set;
//     // insert arr to set
//     for (int i = 0; i < n; i++){
//         set.insert(arr[i]);
//     }

//     int k = set.size();
//     // copy unique elements back to array
//     int j = 0;
//     for(int x:set){
//         arr[j++] = x;
//     }

//  // Print arr
//     for (int i = 0; i < k; i++) {
//         cout << arr[i] << " ";
//     }

// }

// Optimal Approach

#include <iostream>
using namespace std;
#include <set>

int main()
{
    int n = 6;
    int arr[n] = {1, 1, 2, 4, 4, 5};
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    for (int j = 0; j <= i; j++)
    {
        cout << arr[j];
    }   
}