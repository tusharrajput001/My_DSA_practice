// fibonacci series

// #include <bits/stdc++.h>
// using namespace std;

// int fibo(int n)
// {
//     // base case
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;

//     // recusrion relation
//     return fibo(n - 1) + fibo(n - 2); // add the last 2 elements from numbers
// }

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         cout << fibo(i) << " ";
//     }
//     return 0;
// }

// factorial

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     if(n == 0 || n == 1) return 1;
//     //recursion realtion
//     return n * fact(n-1);
// }

// int fact(int n){
//     int fact = 1;
//     while(n > 1){
//         fact = fact * n;
//         n--;
//     }
//     return fact;
// }

// int main(){
//     int n = 5;
//     int ans = fact(n);
//     cout << ans ;
//     return 0;
// }

// prime number - the number which has only 2 divisors it is 1 or itself
//  #include <iostream>
//  using namespace std;

// bool isPrime(int n){
//     if(n <= 1) return false;

//     for(int i=2; i<n; i++){
//         if(n % i == 0){
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     isPrime(21) ? cout << " true\n" : cout << " false\n";
//     isPrime(17) ? cout << " true\n" : cout << " false\n";
//     return 0;
// }

// print this pattern
//  *
//  **
//  ***
//  ****
//  *****

// #include <iostream>
// using namespace std;

// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=0; j<i; j++){
//             cout << "*" << " ";
//         }
//         cout <<endl;
//     }
// }

// reverse a string

// #include <iostream>
// using namespace std;

// string ReverseString(string str, int s, int e){
//     while(s <= e){
//         // swap(str[s],str[e]);
//         char temp = str[s];
//         str[s] = str[e];
//         str[e] = temp;
//         s++;
//         e--;
//     }
//     return str;

// }

// int main(){
//     string str = "TusharRajput";

//     string revStr = ReverseString(str, 0, str.length()-1);
//     cout << revStr;
//     return 0;
// }

// SELECTION SORT
// #include <bits/stdc++.h>
// using namespace std;

// void Selsort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         int mini = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[mini])
//             {
//                 mini = j;
//             }
//         }
//         swap(arr[mini], arr[i]);
//     }
// }

// int main()
// {
//     vector<int> arr = {5, 12, 23, 45, 223, 4, 45};
//     Selsort(arr);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


