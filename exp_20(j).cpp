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
