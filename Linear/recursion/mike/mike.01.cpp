#include<iostream> 
#include<vector> 
using namespace std; 


//Defination-> A function Calling Itself 
//A recursion have two things 
//1st--> A terminating Scenario that 
// does not use recursion to produce an 
// answer 

//2nd -> Recursive Step-> 
//A set of rules (story) that reduces all 
//successive cases toward the base case 


//3rd =? Call the Recursion and have faith on it..

//1st Code -> 
// Factorial Code
// Intution-> ?
// Think of the smallest value that you can find the  
// answer by yourSelf That is the Base Case 
int Factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*Factorial(n-1);
    
}
//2nd Code=> Reverse the number 
void ReverseString(string str,int idx){
    if(idx>=str.size()){
        return;
    }
    ReverseString(str, idx+1);
    cout<<str[idx];
}
int main(){
    int n=5; 
    cout<<Factorial(n);
    cout<<" ";
    ReverseString("SUANANYAJ",0);

    return 0;
}