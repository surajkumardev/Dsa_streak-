// L6. Recursion on Subsequences | Printing Subsequences
// what is subsequences ->
// a contiguos/non-contiguos sequence which follows the order 
//order is important as you know it matter the most 

#include <iostream>          
#include <vector>            
using namespace std;         

// a contiguous / non-contiguous sequence that follows order

void printF(int idx, vector<int> &ds, int arr[], int n){
    if(idx == n){
        if(ds.size() == 0){
            cout << "{}";
        } else {
            for(auto it : ds){
                cout << it << " ";
            }
        }
        cout << endl;
        return;
    }

    // not pick
    printF(idx + 1, ds, arr, n);

    // pick
    ds.push_back(arr[idx]);
    printF(idx + 1, ds, arr, n);
    ds.pop_back();
}

int main(){
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;

    printF(0, ds, arr, n);
}
// tc->2n *n 
// sc ->o(n)
