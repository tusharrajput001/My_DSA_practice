// factorial without recursion
// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n, long fac){
//     //base case 
//     if(n < 0){
//         return -1;
//     }
//     else{
//         for (int i = 1; i <= n; ++i)
//         {
//             fac = fac * i;
//         }
//         return fac;
//     }
// }



// int main(){
//     int n;
//     long fac = 1.0;

//     cout << "Enter a positive integer";
//     cin >> n;
//     int ans = fact(n, fac);
//     cout << ans;
//     return 0;
// }



//using recursion

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    //base case 
    if(n == 0){return 1;}

    else{
        return n * fact(n-1); 
    }
}



int main(){
    int n;
    cout << "Enter a positive integer";
    cin >> n;
    int ans = fact(n);
    cout << ans;
    return 0;
}