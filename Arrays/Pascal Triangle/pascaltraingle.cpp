// Variation 1 (Give r and c , tell the element)

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
//     int r = 5; // row number
//     int c = 3; // col number
//     int element = pascalTriangle(r, c);
//     cout << "The element at position (r,c) is: "
//          << element << "n";
//     return 0;
// }

// varaition 2 print entire row
#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int n)
{
    for (int c = 0; c <= n; c++)
    {
        cout << nCr(n - 1, c - 1) << " ";
    }
    cout << "n";
}

int main()
{
    int n = 5;
    pascalTriangle(n);
    return 0;
}