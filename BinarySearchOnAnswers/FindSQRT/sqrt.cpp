// BRUTE FORCE APPROACH
// #include <bits/stdc++.h>
// using namespace std;

// int floorSqrt(int n){
//     int ans = -1;
//     for (int i = 1; i < n; i++)
//     {   
//         int val = i * i;
//         if(val <= n){
//             ans = i;
//         }
//         else{
//             break;
//         }
//     }
//     return ans;
    
// }




// int main()
// {
//     int n = 55;
//     int ans = floorSqrt(n);
//     cout << "The floor of square root of " << n
//          << " is: " << ans << "\n";
//     return 0;
// }



// USING BINARY SEARCH 

#include <bits/stdc++.h>
using namespace std;


int floorSqrt(int n){
    int low = 1, high = n; 
    while(low <= high){
        int mid = (low + high) / 2;
        int val = mid * mid;

        if(val < n){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }
    return high;
}



int main()
{
    int n = 28;
    int ans = floorSqrt(n);
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    return 0;
}
