#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    // map to store frequency of each character
    unordered_map<char, int> mpp;

    // priority queue to store characters by their frequency
    priority_queue<pair<int, char>> pq;

    // result string
    string res = "";

    // counting frequency of each character
    for (char ch : s)
    {
        mpp[ch]++;
    }

    // pushing the frequency and corresponding character into the priority queue
    for (auto it : mpp)
    {
        pq.push({it.second, it.first});
    }

    // building the result string from the priority queue
    while (!pq.empty())
    {
        // auto will automatically detects the data type fr ex in this it will works as pair<int, char>
        auto temp = pq.top();
        int freq = temp.first;   // access frequency
        char ch = temp.second;   // access character
        res += string(freq, ch); // append the character `freq` times to the result string

        pq.pop();
    }

    return res;
}

int main()
{
    string str = "tree";
    string ans = frequencySort(str);

    cout << ans << endl;
    return 0;
}
