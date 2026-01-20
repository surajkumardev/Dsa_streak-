//primenumber code 
//in the o(root(n))-> time complexity 


// O(n) time complexity because we check all divisors from 1 to n

bool isPrimeroot(int n){
    if(n<=1){
        return false; 
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool isPrime(int n){
    int count=0; 
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count==2;
}

#include<iostream>
using namespace std; 

int main(){
    int n=234;
    int m=17;

    cout<<isPrimeroot(m)<<endl;
    cout<<isPrime()<<endl;



    return 0;
}