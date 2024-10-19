// Sorting Algorithm -> used to rearrange a given array or list of elements according to a comparison operator on the element 
// the comparison operator is used to decide the new order of elements in the respective data structure 

// selection sort

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void s_sort(int* a, int elements){
    for (int i = 0; i < elements - 1; i++) {
        int min_idx = i;  // Assume the minimum element is the first unsorted element
        for (int j = i + 1; j < elements; j++) {
            if (a[j] < a[min_idx]) {  // Find the minimum element in the unsorted part
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first unsorted element
        if (min_idx != i) {
            swap(&a[i], &a[min_idx]);
        }
    }
}

int main(){
    int no_el;
    cout << "How many elements in your array? " << endl;
    cin >> no_el;
    int arr[no_el];  // Array declaration
    cout << "Enter " << no_el << " elements: " << endl;
    for(int i = 0; i < no_el; i++) {
        cin >> arr[i];
    }
    
    s_sort(arr, no_el);  // Call sorting function

    cout << "Sorted Array: ";
    for(int i = 0; i < no_el; i++) {
        cout << arr[i] << " ";  // Corrected the condition in this loop
    }
    cout << endl;

    return 0;
}