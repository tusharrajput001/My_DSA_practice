// BRUTE FORCE 

#include<bits/stdc++.h>
using namespace std;

// string twoSum(int n, vector<int> &arr, int target){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1 ; j < n; j++)
//         {
//             if(arr[i] + arr[j] == target) return "YES";
//         }
//     }
//     return "NO";
    
// }



vector<int> twoSum(int n, vector<int> &arr, int target){
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1,-1};
    
}

// string twoSum(int n, vector<int> &arr, int target) {
//     unordered_map<int,int> mpp;
//     for (int i = 0; i < n; i++)
//     {
//         int num = arr[i];
//         int moreNeeded = target - num;
//         if(mpp.find(moreNeeded) != mpp.end()){
//             return "YES";
//         }
//         mpp[num] = i;
//     }
//     return "NO";
    
// }


vector<pair<int, int>> twoSum( int n, int target , vector<int> &arr) {
  // Write your code here.
  sort(arr.begin(), arr.end());
  vector<pair<int, int>> ans;

  int i = 0, j = n - 1;
  int sum = 0;
  bool found = false;

  while (i < j) {
    sum = arr[i] + arr[j];
    if (sum < target)
      i++;
    else if (sum > target)
      j--;
    else if (sum == target) {
      ans.push_back(make_pair(arr[i], arr[j]));
	  i++;
	  j--;
	  found = true;
    }
  }

  if(found == false)
  	ans.push_back(make_pair(-1, -1));

  return ans;
}





int main(){
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    // string ans = twoSum(n, arr, target);
    // cout << "This is the answer for variant 1: " << ans << endl;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "<< ans[1] << "]" << endl;
    return 0;
}






















