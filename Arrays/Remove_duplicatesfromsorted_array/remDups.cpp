#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[n] = {1, 1, 2, 4, 4, 5};
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    
    // Printing the modified array
    for (int j = 0; j <= i; j++) {
        cout << arr[j] << " ";
    }
    

}
