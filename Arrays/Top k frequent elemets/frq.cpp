#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;

        // Store nums in map with count
        unordered_map<int, int> temp;
        for (int x : nums) {
            temp[x]++;
        }
 
        // Store map pair in priority queue in reverse form because PQ sorts by the first value
        priority_queue<pair<int, int>> res1;
        for (auto& pair : temp) {
            res1.push({pair.second, pair.first}); // Push frequency first, number second
        }

        // Get top K frequent elements
        while (k > 0) {
            pair<int, int> curr = res1.top(); // Get the top element
            res.push_back(curr.second);      // Add the number (second element of pair) to the result
            res1.pop();                      // Remove the top element from the queue
            k--;
        }

        return res;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = solution.topKFrequent(nums, k);

    // Print the result
    cout << "Top " << k << " Frequent Elements:" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
