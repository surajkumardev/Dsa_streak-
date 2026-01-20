#include <iostream>
#include <vector>
using namespace std;
// Sorting Algorithms
/*
Bubble Sort:
- Comparison-based sorting algorithm
- Repeatedly compares adjacent elements
- Swaps them if they are in wrong order
- After each pass, the largest element moves to the end

How it works:
1. Start from index 0
2. Compare arr[j] and arr[j+1]
3. Swap if arr[j] > arr[j+1]
4. Repeat for n-1 passes

Features:
- Stable sorting algorithm
- In-place (no extra space)
- Easy to understand
- Not efficient for large data

Time Complexity:
- Best Case: O(n) [already sorted with optimization]
- Average Case: O(n²)
- Worst Case: O(n²)

Space Complexity:
- O(1)
*/

//Bubble sort code 
void BBs (vector<int> &arr){

    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}
int main() {
    vector<int> arr = {5, 1, 4, 2, 8};

    BBs(arr);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}