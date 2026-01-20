// Sorting Algorithms
/*
Selection Sort:
- Comparison-based sorting algorithm
- Selects the minimum element from the unsorted part
- Swaps it with the first unsorted position

How it works:
1. Assume first element is minimum
2. Traverse remaining array to find actual minimum
3. Swap minimum with current index
4. Move boundary of sorted part forward

Features:
- Simple and easy to implement
- In-place sorting algorithm
- Not stable (default implementation)
- Performs minimum number of swaps

Time Complexity:
- Best Case: O(n²)
- Average Case: O(n²)
- Worst Case: O(n²)

Space Complexity:
- O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

// Selection Sort Function
void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        int min_idx = i;               // assume current index is minimum

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;           // update minimum index
            }
        }

        swap(arr[i], arr[min_idx]);    // swap minimum with current index
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    selectionSort(arr);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}
