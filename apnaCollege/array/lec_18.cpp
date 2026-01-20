// Sorting Algorithms
/*
Insertion Sort:
- Comparison-based sorting algorithm
- Builds the sorted array one element at a time
- Works the way we sort playing cards in hand

How it works:
1. Assume first element is already sorted
2. Pick next element (key)
3. Shift all larger elements one position to the right
4. Insert key at its correct position
5. Repeat until array is sorted

Features:
- Simple and intuitive
- Stable sorting algorithm
- In-place sorting
- Very efficient for small or nearly sorted arrays

Time Complexity:
- Best Case: O(n)  [already sorted]
- Average Case: O(n²)
- Worst Case: O(n²)

Space Complexity:
- O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

// Insertion Sort Function

void insertionSort(vector<int> &arr) {
    int n = arr.size();

    for(int i = 1; i < n; i++) {
        int key = arr[i];      // element to be placed
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];   // shift element right
            j--;
        }

        arr[j + 1] = key;      // insert key at correct position
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};

    insertionSort(arr);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}
