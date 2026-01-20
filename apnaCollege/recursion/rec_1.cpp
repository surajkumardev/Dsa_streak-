#include <iostream>
using namespace std;

void print4to1(int n){
    if(n==1){
        cout << 1 << " ";
        return;
    }
    cout << n << " ";
    print4to1(n-1); //rec_call
}

int main() {
    print4to1(4);
    return 0;
}
