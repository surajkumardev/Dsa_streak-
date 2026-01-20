#include<iostream> 
#include<vector> 
using namespace std; 
//================VIDEO 03================== 
//1. Recursion Tree -> 
//One of the Most Underrated Tools 
// 
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1; 
    }//by Default hota hi hia
    //apko hi likhna hota hai 

    return fib(n-1) + fib(n-2);
}
//Recursion Call Stack -> 
1. Stores Information about active function Calls
2. Each function call add a new fram to the call Stack 
3. Each Frame has its own set fo local Variable
//3. -> Pass by value mai hota hai 
//3. APNa Kudh ka variable hota hai 
|      |
|      |
|Stack |->Stack Frame 
|Call  |
||||||||

int main()
{
    int n=5; 
    cout<<fib(5);
    return 0;
}