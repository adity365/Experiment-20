# Experiment-20
AIM : To study sorting algorithm and its tyes(selection , insertion and bubble sort) in C++.

# Sorting Algorithm :
A sorting algorithm is a method for arranging elements of a list or array in a particular order, usually in ascending or descending order. The purpose of sorting is to organize data so that it can be searched and processed efficiently. Common examples of sorting algorithms include Selection Sort, Insertion Sort, Bubble Sort .

# Types :
1. Selection Sort :
Selection Sort is an in-place comparison sorting algorithm. It divides the list into two parts: the sorted part at the left end and the unsorted part at the right end. The algorithm repeatedly selects the smallest (or largest, depending on the order) element from the unsorted part and swaps it with the first unsorted element.

2. Insertion Sort :
Insertion Sort is a simple comparison-based algorithm. It builds the final sorted array one item at a time, by comparing each new element to the ones before it and inserting it into the correct position.

3. Bubble Sort :
Bubble Sort is a simple comparison-based algorithm where adjacent elements are compared, and if they are in the wrong order, they are swapped. This process repeats until no more swaps are needed, meaning the array is sorted.

# Code performed in Lab :
Experiment 20(a) 
```
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
```
OUTPUT : 
![image](https://github.com/user-attachments/assets/626f0bed-5744-4ea0-ab05-66b653337a55)

Experiment 20(b) :
```
// Insertion Sort 

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    insertionSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

```
OUTPUT :
![image](https://github.com/user-attachments/assets/b7d450a5-21db-431b-9c79-fca13cee623c)

Experiment 20(c) :
```
// Bubble Sort 

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include<iostream>
using namespace std;

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int elements;
    cout<<"How many elements in the array? :";
    cin>>elements;
    int array[elements];
    cout<<"Enter elements:";
    for(int i=0;i<elements;i++){
        cin>>array[i];
    }
    for(int i=0;i<elements;i++){
        cout<<array[i]<<" ";
    }
    int n=0;
    while(n!=elements){
        for(int i=0;i<elements-n;i++){
            if(array[i]>array[i+1]){
                swap(&array[i],&array[i+1]);
            }
        }
        n++;
    }
    cout<<"\nSorted array is:"<<endl;
    for(int i=0;i<elements;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
```
OUTPUT :

![image](https://github.com/user-attachments/assets/8d6fedc3-74e3-4632-b9e2-77d7eef17b10)

# CODE PERFORMED DURING WORKSHOP :
SELECTION SORT CODE 1 :
```
// selection sort 
// arranging number in an array in increasing order of their precedance 

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
        int min_index = i;  // Assume the minimum is the first element of the unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;  // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        if (i != min_index) {
            swap(arr[i], arr[min_index]);
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

```
OUTPUT :
![image](https://github.com/user-attachments/assets/fdfae7cb-b182-487b-b721-b4da3ae9628e)

SELECTION SORT CODE 2 : 
```
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

```
OUTPUT :
![image](https://github.com/user-attachments/assets/fcfd0557-fdee-4478-a873-92e0ea7882da)

INSERTION SORT :
```
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

```
OUTPUT :
![image](https://github.com/user-attachments/assets/39ecd83d-94c4-41f0-b103-c3e72c1e6dff)

BUBBLE SORT CODE 1 :
```
// bubble sort code which sorts number in increasing order of their value 

# include <iostream>
# include <algorithm>
using namespace std;

int main(){
    int arr[5] = {23,12,56,144,78};
    int n = 5;

    // Bubble sort 
    for (int i = 0;i<n-1;i++){
        for (int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout << "The sorted array will be : ";
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```
OUTPUT :
![image](https://github.com/user-attachments/assets/64cfb7d4-b92f-4fae-aaf0-4920bf8d6d30)

CODE FOR BUBBLE SORT :
CODE (a)
```
// bubble sort code which sorts number in increasing order of their value 

# include <iostream>
# include <algorithm>
using namespace std;

int main(){
    int arr[5] = {23,12,56,144,78};
    int n = 5;

    // Bubble sort 
    for (int i = 0;i<n-1;i++){
        for (int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout << "The sorted array will be : ";
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

```
OUTPUT :
![image](https://github.com/user-attachments/assets/8a291f14-417d-4537-96f5-2a0b09b5631b)

CODE (B)
```
// bubble sort code which sort code in the decresing order of their value 

# include <iostream>
# include <algorithm>
using namespace std;

int main(){
    int arr[5] = {23,12,56,144,78};
    int n = 5;

    // Bubble sort 
    for (int i = 0;i<n-1;i++){
        for (int j = 0;j>n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout << "The sorted array will be : ";
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
```
OUTPUT :
![image](https://github.com/user-attachments/assets/77d06159-b6c6-478c-b691-f56eaf971648)

CODE (C)
```
// [76,89,321,65,132,34] sort the array using bubble sort 

# include <iostream>
# include <algorithm>
using namespace std;

int main(){
    int arr[6] = {76,89,321,65,132,34};
    int n = 5;

    // Bubble sort 
    for (int i = 0;i<n-1;i++){
        for (int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout << "The sorted array will be : ";
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

```
OUTPUT :
![image](https://github.com/user-attachments/assets/1f252812-0556-4eeb-a45b-2a4643cb73e7)

CONCLUSION :
We have learned and implemented sorting of array and its types in C++ .
