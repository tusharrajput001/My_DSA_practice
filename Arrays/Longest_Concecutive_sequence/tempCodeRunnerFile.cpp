bool linearSearch(vector<int> &arr, int num)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == num)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int longestConSeq(vector<int> arr, int n)
// {
//     int longest = 1;   // lets assume longest be 1.
//     for (int i = 0; i < n; i++)
//     {
//         int x = arr[i];      // select first index.
//         int cnt = 1;         // let count 1.

//         while (linearSearch(arr, x + 1) == true)    // if we found some consecutive.
//         {
//             x = x + 1;
//             cnt += 1;
//         }

//         longest = max(longest, cnt);
//     }
//     return longest;
// }