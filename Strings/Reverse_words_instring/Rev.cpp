// Example 1:

// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Example 2:

// Input: s = "Mr Ding"
// Output: "rM gniD"


class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        int i = 0;
        while(i<n){
            string temp = "";
            while(s[i] == ' ' && i<n){
                i++;
            }
            while(s[i] !=  ' ' && i<n){
                temp += s[i];
                i++;
            }
            if(temp.size() > 0){
                reverse(temp.begin(), temp.end());
                ans += temp + ' ';
            }}
    ans.pop_back();
    return ans;
    }
};