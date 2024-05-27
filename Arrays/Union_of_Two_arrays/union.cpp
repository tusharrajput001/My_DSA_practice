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

int main(){
    int n1 = 10, n2 = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector < int > Union = FindUnion(arr1, arr2, n1, n2);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto & val: Union)
    cout << val << " ";
    return 0;
}