#include <bits/stdc++.h>
using namespace std;
// FIND THE MAXIMUM VALUE FROM THE ARRAY (V.simple LS)
int findMax(vector<int> &v)
{
    int maxi = INT_MIN;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int CalcTotalHour(vector<int> &v, int hourley)
{
    int totalh = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        totalh += ceil((double)(v[i]) / (double)(hourley));
    }

    return totalh;
}

int minimumRateToEatBananas(vector<int> v, int h)
{
    int low = 1, high = findMax(v);

    while (low <= high)
    {
        int mid = (low + high) / 2;

        // let's consider the mid value as we are eating mid no. of bananas per hour
        int totalH = CalcTotalHour(v, mid);
        if (totalH <= h)
        {

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        } 
    }
    return low;
}

int main()
{
    vector<int> v = {7, 15, 6, 3};
    int h = 8;  // 8 hr is deadline
    int ans = minimumRateToEatBananas(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
}