#include<bits/stdc++.h>
using namespace std;

bool CheckAnagram(string s, string t){
    unordered_map<char,int> cnt;

    for(auto x : s){
        cnt[x]++;
    }

    for(auto x : t){
        cnt[x]--;
    }

    for(auto x: cnt){
        if(x.second == 1){
            return false;
        }
    }
    return true;

}

int main(){
    string s = "anagram";
    string t = "nagaram";

    bool check = CheckAnagram(s,t);
    if(check){
        cout << "True";
    }
    else{
        cout << "False";
    }

}