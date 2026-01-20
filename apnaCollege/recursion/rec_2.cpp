//9 to 5 work on the striver 
//i don't care you learning or not just complete 
//keep your mind active 
#include <iostream>
using namespace std;



int factorial(int n){
    if(n<=1){
        return 1; 
    }
    // return n*factorial(n-1);
    int ans=factorial(n-1);
    return n*ans;
}
int main() {
    int n;
    cout<<factorial(5);
    return 0;
}
