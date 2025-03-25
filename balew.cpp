#include <iostream>
using namespace std;

int findsmallest(int arr[], int size) {
    int minNumber = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] < minNumber) {
            minNumber = arr[i]; 
        }
    }
    return minNumber;
}
int main() {
    int arr[] = {120, 45, 67, 89, 34, 23, 90, 11}; 
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int smallest = findsmallest(arr, size);
    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}
