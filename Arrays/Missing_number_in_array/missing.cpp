// Brute force
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 7;
//     int arr[n] = {1,2,3,4,5,8,9};

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] != i+1){
//             cout<< "Missing number is " << " " << i+1;
//             break;
//         }
//     }

// }

// Better Approach using hashing 
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 7;
//     int arr[n] = {1, 2, 3, 4, 5, 8, 9};

//     // hash array
//     int hash[n + 1] = {0};

//     // store freq
//     for (int i = 0; i < n - 1; i++)
//     {
//         hash[arr[i]]++;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (hash[i] == 0)
//         {
//             cout << "Missing number is : " << i;
//             break;
//         }
//     }
// }



// Optimal approach 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 8, 9};

    int sum = (n * (n + 1)) / 2;              

    int s2 = 0;
    
    for (int i = 0; i < n-1; i++)
    {
        s2 += arr[i];
    }

    int missingNum = sum - s2;
    cout << missingNum;
}