// using selection sort such that code sorts number in the decreasing order of their precedance 

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {23, 12, 56, 144, 78};
    int n = 5;

    // Selection sort 
    for (int i = 0; i < n - 1; i++) {
        int max_index = i;  // Assume the minimum is the first element of the unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;  // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        if (i != max_index) {
            swap(arr[i], arr[max_index]);
        }
    }

    // Output the sorted array
    cout << "The sorted array will be: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  // Adding a new line for better output
    return 0;
}
