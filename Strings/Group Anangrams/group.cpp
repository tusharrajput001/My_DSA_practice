#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (auto x : strs) {
        string word = x;
        sort(word.begin(), word.end()); // Sort each word to group anagrams
        mp[word].push_back(x);
    }

    vector<vector<string>> ans;
    for (auto x : mp) {
        ans.push_back(x.second); // Push each group of anagrams into the result
    }
    return ans;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(strs);

    // Print the result
    cout << "Grouped Anagrams:" << endl;
    for (auto group : ans) {
        cout << "[ ";
        for (auto word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
