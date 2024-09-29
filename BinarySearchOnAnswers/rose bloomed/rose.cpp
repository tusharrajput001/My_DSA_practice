// Brute force apporach 


// #include <bits/stdc++.h>
// using namespace std; // m = no. of bookets      k= no. of flowers

// bool Possible(vector<int> &arr, int days, int m, int k)
// {
//     int n = arr.size(); 
//     int cnt = 0;
//     int noOfBk = 0;

//     for (int i = 0; i < n; i++)
//     {   
//         if (arr[i] <= days)
//         {
//             cnt++;
//         }
//         else
//         {
//             noOfBk += (cnt / k);
//              cnt = 0;
//         }
//     }
//     noOfBk += (cnt / k);
//     return noOfBk >= m;
       
// }

// int roseGarden(vector<int> &arr, int k, int m)
// {
//     long long val = m * k;
//     int n = arr.size();
//     // impossible case
//     if (val > n)
//         return -1;

//     // now find the min and max val of flowers in arr
//     int mini = INT_MAX, maxi = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         mini = min(mini, arr[i]);
//         maxi = max(maxi, arr[i]);
//     }

//     // check from min days to max days possiblitiy
//     for (int i = mini; i < maxi; i++)
//     {
//         if (Possible(arr, i, m, k))
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
//     int k = 3;
//     int m = 2;
//     int ans = roseGarden(arr, k, m);
//     if (ans == -1)
//         cout << "We cannot make m bouquets.\n";
//     else
//         cout << "We can make bouquets on day " << ans << "\n";
//     return 0;
// }


// BS optimal approach


#include <bits/stdc++.h>
using namespace std; // m = no. of bookets      k= no. of flowers

bool Possible(vector<int> &arr, int days, int m, int k)
{
    int n = arr.size(); 
    int cnt = 0;
    int noOfBk = 0;

    for (int i = 0; i < n; i++)
    {   
        if (arr[i] <= days)
        {
            cnt++;
        }
        else
        {
            noOfBk += (cnt / k);
             cnt = 0;
        }
    }
    noOfBk += (cnt / k);
    return noOfBk >= m;
       
}

int roseGarden(vector<int> &arr, int k, int m)
{
    long long val = m * k;
    int n = arr.size();
    // impossible case
    if (val > n)
        return -1;

    // now find the min and max val of flowers in arr
    int mini = INT_MAX, maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    int low = mini , high = maxi;
	while(low <= high){
		int mid = (low + high)/2;
		if(Possible(arr,mid,m,k)){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return low;
}

int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = roseGarden(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}




