
#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    int arr[n] = {40, 12, 43, 23, 56, 34, 22, 100, 22, 12};
    int largest = arr[0];
    cout << "Largest Element in array: ";
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest << " "<< endl;

    int smallest = arr[0];
    cout << "Smallest Element in array: ";
    for (int i = 1; i <= n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << smallest << " "; 

    return 0;
}