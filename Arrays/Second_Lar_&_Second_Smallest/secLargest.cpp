
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {40, 12, 43, 90, 56, 94};

    // largest
    int largest = arr[0];
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Second Largest
    int SLargest = -1;
    for (int j = 0; j <= n; j++)
    {
        if (arr[j] > SLargest && arr[j] != largest)
        {
            SLargest = arr[j];
        }
    }

    cout << "Second Largest :" << SLargest<< endl;

    // smallest
    int smallest = arr[0];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }



    // Second Smallest

    int SecondSmallest = INT8_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < SecondSmallest && arr[i] != smallest ){
            SecondSmallest = arr[i];
        }
    }
    cout << "Second Smallest : " << SecondSmallest;     


    
}       