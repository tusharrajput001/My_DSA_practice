#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        int flag = 0; // Reset flag to 0 for each i
            
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "Missing number is: " << i << endl;
        }
    }
   
}
