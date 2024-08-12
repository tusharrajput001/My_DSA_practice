// BRUTE FORCE 
// #include <bits/stdc++.h>
// using namespace std;

// int missingK(vector<int>& vec, int n, int k){
//     for (int i = 0; i < n; i++)
//     {
//         if(vec[i] <= k) k++;
//         else break;
//     }
//     return k;
    
// }

// int main()
// {
//     vector<int> vec = {4, 7, 9, 10};
//     int n = 4, k = 4;
//     int ans = missingK(vec, n, k);
//     cout << "The missing number is: " << ans << "\n";
//     return 0;
// }



// OPTIMAL 
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high - low)/2;
            int missing = arr[mid] - (mid + 1);
            if(missing < k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return k + high + 1;
    }
};