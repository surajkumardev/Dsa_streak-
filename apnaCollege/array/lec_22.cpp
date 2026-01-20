#include <iostream>
#include <vector>
#include <algorithm>   // sort, reverse, next_permutation, min, max, max_element
#include <functional>  // greater<>
using namespace std;

int main() {

    // ----------------------------
    // 1. SORTING
    // ----------------------------
    vector<int> arr = {5, 1, 4, 2, 3};

    // sorting in ascending order
    sort(arr.begin(), arr.end());

    // sorting in descending order
    sort(arr.begin(), arr.end(), greater<int>());  
    // greater<int>() is a function object (functor)
    // returns true if a > b

    // ----------------------------
    // 2. CUSTOM COMPARATOR (same as greater<int>)
    // ----------------------------
    /*
    bool cmp(int a, int b) {
        return a > b;
    }
    sort(arr.begin(), arr.end(), cmp);
    */

    // ----------------------------
    // 3. NEXT PERMUTATION
    // ----------------------------
    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << "Next permutation: " << s << endl;

    // ----------------------------
    // 4. REVERSE
    // ----------------------------
    reverse(arr.begin(), arr.end());

    // ----------------------------
    // 5. SWAP
    // ----------------------------
    int k = 1;
    swap(arr[k], arr[k + 1]);

    // ----------------------------
    // 6. MIN & MAX
    // ----------------------------
    int mn = min(arr[0], arr[1]);
    int mx = max(arr[0], arr[1]);

    // ----------------------------
    // 7. MAX ELEMENT IN ARRAY
    // ----------------------------
    int maxEle = *max_element(arr.begin(), arr.end());

    // ----------------------------
    // OUTPUT
    // ----------------------------
    cout << "Array elements: ";
    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;


    //8.min element
    int minele=*min_element(arr.begin(),arr.end());

    //9. binary search 
    int bs=binary_search(v.begin(),v.end(),target);

    //10.count set bits 
    cout<<__builtin_popcount(n)<<endl;
    //return number of set bits


    cout << "Min of first two: " << mn << endl;
    cout << "Max of first two: " << mx << endl;
    cout << "Maximum element in array: " << maxEle << endl;

    return 0;
}
