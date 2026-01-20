#include<iostream> 
#include<vector> 
using namespace std; 
//==========VIDEO 05===========
// Believe in yourself, because you are capable of achieving 
//greatness beyond your imagination

//mistake are proof that you are trying . 
//Learn from them, grow and never b afraid 
//to take new challenges 

//====== Tail Recursion =====
//it is a form of  recursion , where the recursive call 
//is the last operation performed in the function 
// eg-> 
int solve(int n){
    //base 
    return solve(n-1); //iske neeche kuch nahi 
    //kar rahe ho  
}
//nOTE -> THE FACTORIAL IS NOT A TAIL RECURSIOn 
int factor(int n ){
    if(n<=1){
        return 1; 
    }
    return n* factor(n-1);
    //here the last step is multiply not the call 
}
//Converting the NON TAIL TO TAIL CODE 
void Factorial(int n, int answer){
    if(n<1){
        cout<<answer<<endl;
        return; 
    }
    Factorial(n-1,answer*n);
}



//Tail call Optimisation 
// ==> 

//PreOrder -> Print Left, right -> Last step Rec-> tail recursion
//PostOrder --> Left, rigth, node --> NO not tail recursion
//Inorder--> Left root, right ---> yes a tail recursion 
int main(){
    Factorial(5,1);
    return 0;
}