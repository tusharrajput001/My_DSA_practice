// #include <bits/stdc++.h>
// using namespace std;

// int nCr(int n, int r)
// {
//     long long res = 1;

//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);    
//     }
//     return res;
// }

// int pascalTriangle(int r, int c)
// {
//     int element = nCr(r - 1, c - 1);
//     return element;
// }

// int main()
// {
//     int r = 5;
//     int c = 3;
//     int element = pascalTriangle(r, c);
//     cout << "The element at the postion (r,c) is : " << element ;
//     return 0;
// }


// print entrire row

// #include <bits/stdc++.h>
// using namespace std;

// int nCr(int n, int r) {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++) {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// void pascalTriangle(int n) {
//     // printing the entire row n:
//     for (int c = 1; c <= n; c++) {
//         cout << nCr(n - 1, c - 1) << " ";
//     }
//     cout << "n";
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }


// entire triangle nth

