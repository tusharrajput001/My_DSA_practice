// #include <bits/stdc++.h>
// using namespace std;

// vector<int> MoveZerosToEnd(vector<int> &arr)
// {
//     int n = arr.size();
//     int j = -1;

//     // find first zero element and assign it to j
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             j = i;
//             break;
//         }
//     }

//     // no zero elements
//     if (j == -1)
//         return arr;

//     // now swap all
//     for (int i = j + 1; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             swap(arr[j], arr[i]);
//             j++;
//         }
//     }

//     return arr;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 0, 3, 4, 0, 0, 5};
//     MoveZerosToEnd(arr);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> UnionOftwoArrays(vector<int> &a, vector<int> &b)
// {
//     int n1 = a.size();
//     int n2 = b.size();
//     vector<int> NewArr;

//     set<int> st;
//     st.insert(a.begin(), a.end());
//     st.insert(b.begin(), b.end());

//     for (auto it : st)
//     {
//         NewArr.push_back(it);
//     }

//     return NewArr;
// }

// int main()
// {
//     vector<int> a = {1, 2, 3, 4, 5, 6};
//     vector<int> b = {1, 2, 3, 7, 8};
//     vector<int> newArr = UnionOftwoArrays(a, b);
//     for (int i = 0; i < newArr.size(); i++)
//     {
//         cout << newArr[i] << " ";
//     }
//     return 0;
// }


