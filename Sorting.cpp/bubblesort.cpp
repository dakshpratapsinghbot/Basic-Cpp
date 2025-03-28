#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {56, 12, 95, 24, 75}; // Fixed array size
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    bubbleSort(arr, n);
    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    
}