// BRUTE FORCE APPROACH
// #include<bits/stdc++.h>
// using namespace std;

// double median(vector<int>& arr1, vector<int>& arr2){

//     vector<int> arr3;
//     int n1 = arr1.size();
//     int n2 = arr2.size();
//     int i = 0, j=0;
//     while(i<n1 && j<n2){
//         if(arr1[i] < arr2[j]){
//             arr3.push_back(arr1[i++]);
//         }
//         else{
//              arr3.push_back(arr2[j++]);
//         }
//     }
//     while(i<n1) arr3.push_back(arr1[i++]);
//     while(j<n2) arr3.push_back(arr2[j++]);

//     int n = n1 + n2;
//     // if arr1 is odd
//     if(n % 2 == 1){
//         return (double)arr3[n/2];
//     }
//     // if n is even
//     else{
//         return (double)arr3[n/2] + (double)arr3[(n/2) - 1]/2.0;
//     }

// }

// int main()
// {
//     vector<int> a = {1, 4, 7, 10, 12};
//     vector<int> b = {2, 3, 6, 15};
//     cout << "The median of two sorted array is " << fixed << setprecision(1)
//          << median(a, b) << '\n';
// }

// BETTER APPROACH

// #include <bits/stdc++.h>
// using namespace std;

// double median(vector<int> &ar1, vector<int> &ar2)
// {
//     int n1 = ar1.size();
//     int n2 = ar2.size();
//     int n = n1 + n2;
//     int ind2 = n / 2;
//     int ind1 = ind1 - 1;
//     int cnt = 0;
//     int ind1el = -1, ind2el = -1;

//     int i = 0, j = 0;
//     while (i < n1 && j < n2)
//     {
//         if (ar1[i] < ar2[j])
//         {
//             if (cnt == ind1)
//                 ind1el = ar1[i];
//             if (cnt == ind2)
//                 ind2el = ar1[i];
//             cnt++;
//             i++;
//         }

//         else
//         {
//             if (cnt == ind1)
//                 ind1el = ar2[i];
//             if (cnt == ind2)
//                 ind2el = ar2[i];
//             cnt++;
//             j++;
//         }
//     }

//     while (i < n1)
//     {
//         if (cnt == ind1)
//             ind1el = ar1[i];
//         if (cnt == ind2)
//             ind2el = ar1[i];
//         cnt++;
//         i++;
//     }

//     while (j < n2)
//     {
//         if (cnt == ind1)
//             ind1el = ar2[i];
//         if (cnt == ind2)
//             ind2el = ar2[i];
//         cnt++;
//         j++;
//     }

//     if (n % 2 == 1)
//     {
//         return (double)ind2el;
//     }
//     return (double)((double)(ind1el + ind2el)) / 2.0;
// }

// int main()
// {
//     vector<int> a = {1, 4, 7, 10, 12};
//     vector<int> b = {2, 3, 6, 15};
//     cout << "The median of two sorted array is " << fixed << setprecision(1)
//          << median(a, b) << '\n';
// }

// OPTIMAL APPROACH

#include <bits/stdc++.h>
using namespace std;

double median(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();

    if (n1 > n2)
        median(b, a);
    int n = n1 + n2;
    int left = (n1 + n2 + 1) / 2;
    int low = 0, high = n1;
    while (low <= high)
    {
        int mid1 = (low + high) / 2;
        int mid2 = left - mid1;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if (mid1 < n1)
            r1 = a[mid1];
        if (mid2 < n2)
            r2 = b[mid2];
        if (mid1 - 1 >= 0)
            l1 = a[mid1 - 1];
        if (mid2 - 1 >= 0)
            l2 = a[mid2 - 1];

        if (l1 <= r2 && l2 <= r1)
        {
            if (n % 2 == 1)
                return max(l1, l2);
            else
                return double((double)(max(l1, l2) + min(r1, r2))) / 2.0;
        }

        else if (l1 > r2)
            high = mid1 - 1;
        else
            low = mid1 + 1;
    }

    return 0;
}

int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    cout << "The median of two sorted array is " << fixed << setprecision(1)
         << median(a, b) << '\n';
}
