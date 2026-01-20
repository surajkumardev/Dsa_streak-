//Lecture 03 
#include<iostream>  
#include<vector> 
using namespace std; 
//Question Number 01 --Sum of n natural number 
void sumOfNatural(int n, int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sumOfNatural(n-1, sum+n);
}
int SumoFNAstural(int n){
    if(n==0){
        return 0; 
    }
    return n + SumoFNAstural(n-1);
}


//Question 2 -> factorail program using recu
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1); //in the recursion you need faith 
    //biswap pai hi sab tikaa hai jani
}
//TC=> O(N)
//AUXIALIARY SPACE => STACK SPACE =>O(N)
int main(){
    sumOfNatural(3,0);
    cout<<SumoFNAstural(3)<<endl;
    //Factorial Code 
    cout<<factorial(1);
    return 0;
}