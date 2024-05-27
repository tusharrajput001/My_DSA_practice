// Using Set DataStructure
 
#include <bits/stdc++.h>
using namespace std;

vector <int> FindUnion(int arr1[], int arr2[], int n1, int n2){
    set <int> s;
    vector <int> Union;

    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }
    for(auto it: s)
        Union.push_back(it);
    return Union;
}


// Optimal approach using two pointer 

vector<int> FindUnion2(int arr1[],int arr2[], int n1, int n2){
    int i = 0;  // pointer i
    int j = 0;  // pointer j
    vector<int> unionArr; // vector for union array


    while(i<n1 && j<n2){   // while array 1 and arr2 is finished pointing
        if(arr1[i] <= arr2[j]){    // if pointer on arr1 is less than pointer on arr2
            if(unionArr.empty() || unionArr.back() != arr1[i]){   // check if empty or check previous values in unionarr is not equal to arr1[i]
                unionArr.push_back(arr1[i]);   // if all cond approved then push in UnionArr
            }
            i++;   // Move the pointer
        }
        else{
            if(unionArr.empty() || unionArr.back() != arr2[j]){     // check conditions same for the arr2 and then push to union
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(j< n2){    // if j pointer is not completely iterated
            if(unionArr.empty() || unionArr.back() != arr2[j]){  
               unionArr.push_back(arr2[j]);
            }
            j++;
    }
    while (i < n1) { // if i pointer is not completely iterated
        if (unionArr.empty() || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    return unionArr;




}


int main(){
    int n1 = 10, n2 = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector < int > Union = FindUnion2(arr1, arr2, n1, n2);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto & val: Union)
    cout << val << " ";
    return 0;
}