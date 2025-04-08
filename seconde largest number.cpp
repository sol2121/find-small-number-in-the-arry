#include <iostream>

using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array is too small to have a second largest element." << endl;
        return -1;
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest element." << endl;
        return -1;
    }

    return second;

}
int findThirdLargest(int arr[], int n) {
    if (n < 3) {
        cout << "Array is too small to have a third largest element." << endl;
        return -1;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second) {
            third = arr[i];
        }
    }

    if (third == INT_MIN) {
        cout << "No third largest element." << endl;
        return -1;
    }

    return third;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1) {
        cout << "Second largest element is: " << secondLargest << endl;
    }

    int thirdLargest = findThirdLargest(arr, n);
    if (thirdLargest != -1) {
        cout << "Third largest element is: " << thirdLargest << endl;
    }

    return 0;
}