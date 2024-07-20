#include <bits/stdc++.h>
using namespace std;

// BRUTE FORCE

// void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
//     // set all non-zero elements as -1 in the row i:
//     for (int j = 0; j < m; j++) {
//         if (matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }

// void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
//     // set all non-zero elements as -1 in the col j:
//     for (int i = 0; i < n; i++) {
//         if (matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//     // Set -1 for rows and cols
//     // that contains 0. Don't mark any 0 as -1:

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 markRow(matrix, n, m, i);
//                 markCol(matrix, n, m, j);
//             }
//         }
//     }

//     // Finally, mark all -1 as 0:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == -1) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// BETTER APPROACH

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
// {
//     int col[m] = {0};
//     int row[n] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (row[i] || col[j])
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: n";
//     for (auto it : ans)
//     {
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }

// Bruteforce approach

// #include <bits/stdc++.h>
// using namespace std;

// void markRow(vector<vector<int>> &matrix, int n, int m, int i)
// {
//     for (int j = 0; j < m; j++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

// void markCol(vector<vector<int>> &matrix, int n, int m, int j)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             markRow(matrix, n, m, i);
//             markCol(matrix, n, m, j);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == -1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is : n";
//     for (auto it : ans)
//     {
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }

//     return 0;
// }

// Better Approach
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
    int row[n] = {0};
    int col[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] = 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: n";
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
}