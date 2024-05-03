// BruteForce Approach

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1 = 6;
    int n2 = 6;
    int a1[n1] = {1, 1, 2, 3, 4, 5};
    int a2[n2] = {2, 3, 4, 4, 5, 6};

    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        st.insert(a2[i]);
    }

    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}


// Optimal Approach
vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    return unionArr;
}
