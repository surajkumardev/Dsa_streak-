#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b, a % b);
}

int main(){
    int a = 12;
    int b = 60;

    cout << gcd(a, b) << endl;
    return 0;
}
