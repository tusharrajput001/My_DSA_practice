#include <bits/stdc++.h>
using namespace std;

vector<int> printSpiral(vector<vector<int>> matrix)
{

    int n = matrix.size();    // rows
    int m = matrix[0].size(); // cols
    int left = 0, right = m - 1, bottom = n - 1, top = 0;
    vector<int> ans;

    while (top <= bottom && left <= right)
    {

        // right movement from left to right
        for (int i = left; i <= right; i++)

            ans.push_back(matrix[top][i]); // here top row is constant

        top++;

        // bottom movement from top to bottom
        for (int i = top; i <= bottom; i++)

            ans.push_back(matrix[i][right]); // here right column is constant

        right--;

        // left movement from right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)

                ans.push_back(matrix[bottom][i]); // here bottom row is constant

            bottom--;
        }

        // top movement from bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)

                ans.push_back(matrix[i][left]); // here left col is constant

            left++;
        }
    }
    return ans;
}

int main()
{

    // Matrix initialization.
    vector<vector<int>> matrix{{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};

    vector<int> ans = printSpiral(matrix);

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}