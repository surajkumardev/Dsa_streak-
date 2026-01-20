//Amrstrong number 

//153 
//1+125+27->yes example hai 
//sum of Cubes of it's digits are called as armstrong numbers

#include<iostream>
using namespace std; 
bool isArmStrong(int n){
    int original=n; 
    int calculated=0;

    while(n>0){
        int rem=n%10;
        calculated=calculated+(rem*rem*rem);
        n=n/10;
    }

    return calculated==original;
}

int main(){
    int n=153; 
    cout<<isArmStrong(n)<<endl;



    return 0;
}


// #include<iostream>
// using namespace std; 

// int main(){
    
//     return 0;
// }