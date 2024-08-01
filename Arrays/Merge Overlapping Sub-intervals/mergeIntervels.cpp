// BRUTE FORCE APPROACH

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr)
// {
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     vector<vector<int>> ans;

//     for (int i = 0; i < n; i++)
//     {
//         int start = arr[i][0];
//         int end = arr[i][1];

//         // skip all merged elements   (agar ans vector me lo last value ha wo new interval ke eql or kam ha to skip)
//         if (!ans.empty() && end <= ans.back()[1])
//         {
//             continue;
//         }

//         // check for rest of intervals
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j][0] <= end)     // update end interval after merge
//             {
//                 end = max(end, arr[j][1]);
//             }
//             else
//             {
//                 break;                // new interval is more high break for new one 
//             }
//         }
//         ans.push_back({start, end});
//     }
//     return ans;
// }

// int main()
// {
//     vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
//     vector<vector<int>> ans = mergeOverlappingIntervals(arr);
//     cout << "The merged intervals are: " << "\n";
//     for (auto it : ans)
//     {
//         cout << "[" << it[0] << ", " << it[1] << "] ";
//     }
//     cout << endl;
//     return 0;
// }


// OPTIMAL APRROACH 

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr) {
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        //if current interval does not lie in the last interval
        if(ans.empty() || arr[i][0] > ans.back()[1]){
            ans.push_back(arr[i]);
        }

        // if current interval is lie on last interval 
        else{
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
    
}



int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = mergeOverlappingIntervals(arr);
    cout << "The merged intervals are: " << "\n";
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}