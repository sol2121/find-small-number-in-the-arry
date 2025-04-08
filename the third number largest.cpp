#include <iostream>
using namespace std;
int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array is too small to have a second largest element." << endl;
        return -1; 
    }
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}
int findThirdLargest(int arr[], int n) {
    if (n < 3) {
        cout << "Array is too small to have a third largest element." << endl;
        return -1;  
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int thirdLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        } else if (arr[i] > thirdLargest && arr[i] != secondLargest) {
            thirdLargest = arr[i];
        }
    }

    return thirdLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1) {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    int thirdLargest = findThirdLargest(arr, n);
    if (thirdLargest != -1) {
        cout << "The third largest element is: " << thirdLargest << endl;
    }

    return 0;
}