
#include <bits/stdc++.h>
using namespace std;
// count students from arr with pages 
int countStudents(vector<int>& arr, int pages){
    int stud = 1, pagesStud = 0;  // stud is 1st and pages consumed are 0
    int n = arr.size();
    // go through array and count the pages 
    for (int i = 0; i < n; i++)
    {
        if(pagesStud + arr[i] <= pages){   // if possible to allocate the next book to same student then add it 
            pagesStud += arr[i];
        }
        else{   // if not possible to allocate the next book then give it to another student
            stud++;
            pagesStud = arr[i];
        }
    }
    return stud;
    


}
// brute
// int findPages(vector<int>& arr, int n, int m){
//     // if no of studes are more than books
//     if(m>n) return -1;
//     // low as max element 
//     int low = *max_element(arr.begin(), arr.end()); 
//     // sum of array 
//     int high = accumulate(arr.begin(),arr.end(),0);

//     // check form low to high
//     for (int pages = low; pages <= high; pages++)
//     {
//         if(countStudents(arr,pages) == m){        
//             return pages;
//         }
//     }
//     return low;
// }

//optimal bs
int findPages(vector<int>& arr, int n, int m){
    // if no of studes are more than books
    if(m>n) return -1;
    // low as max element 
    int low = *max_element(arr.begin(), arr.end()); 
    // sum of array 
    int high = accumulate(arr.begin(),arr.end(),0);

    while(low <= high){
        int mid = (low + high) / 2;
        if(countStudents(arr,mid) > m){   
            low = mid + 1;     
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}
int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}