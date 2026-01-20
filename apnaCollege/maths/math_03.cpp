//digits in a number 

#include<iostream>
using namespace std; 

int countDigit(int n){
    int count=0; 
    while(n>0){
        count=count+1;
        n=n/10;
    }

    return count; 
}
int main(){ 
    int n=242;
    cout<<countDigit(n)<<endl;



    

    return 0;
}