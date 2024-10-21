#include <bits/stdc++.h>
using namespace std;

// remove multiple spaces also

string result(string s)
{
    int n = s.size();
    int left = 0, right = n - 1;

    string ans = "";

    while (left <= right)
    {
        string temp = "";
        char ch = s[left];
        // deal with white spaces
        while (s[left] == ' ' && left <= right)
        {
            left++;
        }
        //  if it contain words then add in temp
        while (s[left] != ' ' && left <= right)
        {
            temp += s[left];
            left++;
        }

        // then store in ans
        if (temp.size() > 0)
        {
            if (ans.size() == 0)
            {
                ans = temp;
            }
            else
            {
                ans = temp + " " + ans;
            }
        }
    }
    return ans;
}

// string result(string s)
// {
//     int left = 0, right = s.length() - 1;

//     string temp = "";
//     string ans = "";

//     while (left <= right)
//     {
//         char ch = s[left];
//         if (ch != ' ')
//         {
//             temp += s[left];
//         }
//         else if (ch == ' ')
//         {
//             if (ans != "")
//                 ans = temp + " " + ans;
//             else
//                 ans = temp;
//             temp = "";
//         }
//         left++;
//     }

//     if (temp != "")
//     {
//         if (ans != "")
//             ans = temp + " " + ans;
//         else
//             ans = temp;
//     }

//     return ans;
// }

int main()
{
    string st = "TUF is great for interview preparation";
    cout << "Before reversing words: " << endl;
    cout << st << endl;
    cout << "After reversing words: " << endl;
    cout << result(st);
    return 0;
}