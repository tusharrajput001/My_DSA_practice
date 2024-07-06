// BRUTE FORCE  
// #include <bits/stdc++.h>
// using namespace std;
// #include<set>

// int removeDuplicates(int arr[], int n)
// {
//     // initialize set
//     set<int> set;
//     // insert arr in set
//     for (int i = 0; i < n; i++)
//     {
//         set.insert(arr[i]);
//     }
//     int k = set.size();
    
//     // copy set in arr
//     int j = 0;
//     for (int x : set)
//     {
//         arr[j++] = x;
//     }
//     return k;
// }

// int main()
// {
//     int arr[] = {1, 1, 2, 2, 2, 3, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = removeDuplicates(arr, n);
//     cout << "The array after removing duplicate elements is " << endl;
//     for (int i = 0; i < k; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


// OPTIMAL APPROACH


// #include <bits/stdc++.h>
// using namespace std;
// #include<set>

// int removeDuplicates(int arr[], int n){
//     int i = 0;
//     for (int j = 1; j < n; j++)
//     {
//         if(arr[i] != arr[j]){
//             arr[i + 1] = arr[j];
//             i++;
//         }
//     }
//     return i + 1;
    
// }


// int main()
// {
//     int arr[] = {1, 1, 2, 2, 2, 3, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = removeDuplicates(arr, n);
//     cout << "The array after removing duplicate elements is " << endl;
//     for (int i = 0; i < k; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
