/*
✅ DNF Algorithm (Dutch National Flag Algorithm)
🔹 What is DNF Algorithm?
DNF (Dutch National Flag) algorithm is used to sort an array containing only 0s, 1s, and 2s in one pass.
🔹 Idea (Very Simple)
We maintain three regions:
0 → left side
1 → middle
2 → right side
We use three pointers:
low → boundary for 0s
mid → current element
high → boundary for 2s
🔹 Working Steps
If arr[mid] == 0
→ swap with low, move low++, mid++
If arr[mid] == 1
→ just mid++
If arr[mid] == 2
→ swap with high, move high--
*/

#include <iostream>
#include <vector>
using namespace std;



//USE TO SOLVE TEH COLOR PROBLEM LEETCODE 75 
// 00001111mid2222
void dnfSort(vector<int> &arr) {
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while(mid <= high) { //mid -> is the current index 
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}





int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    dnfSort(arr);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}
