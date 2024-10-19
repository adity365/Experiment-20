// INSERTION SORT 

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {45, 23, 86, 12, 9};
    int n = 5;

    // Insertion sort
    for (int i = 1; i < n; i++) {
        int current = arr[i];  // the current element to be inserted
        int j = i - 1;  // Use j to track the position where current will be inserted

        // shifting elements of arr[0...i-1], that are greater than current
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;  // Insert the current element at its correct position
    }

    // Output the sorted array
    cout << "The sorted array will be: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  // Add a newline for better output formatting
    return 0;
}
