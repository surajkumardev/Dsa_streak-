#include <iostream>
using namespace std;

int main() {

    // ----------------------------
    // 1. Simple pointer
    // ----------------------------
    int x = 10;
    int* p = &x;

    cout << "Value of x: " << x << endl;
    cout << "Using pointer: " << *p << endl;

    // ----------------------------
    // 2. Array as pointer
    // ----------------------------
    int arr[] = {1, 2, 3, 4, 5};

    int* ptr = arr;   // array name acts as pointer

    cout << "Array elements using pointer: ";
    for(int i = 0; i < 5; i++){
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // ----------------------------
    // 3. Two pointer example
    // (reverse array)
    // ----------------------------
    int l = 0;
    int r = 4;

    while(l < r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
