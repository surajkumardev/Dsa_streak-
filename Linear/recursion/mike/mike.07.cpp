#include<iostream> 
#include<vector> 
using namespace std; 
//Tower of Hanoi // It works 
//=========Tower OF HANoi 06 Video=============
int towerOfHanoi(int n, int from, int to, int aux) {
    // code here
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1; 
    }
    //now do the recursive magic
    int left=towerOfHanoi( n-1, from, aux, to );
    int right =towerOfHanoi(n-1, aux, to , from);
    return left+right+1; 
    //THIS IS THE POWER OF RECURSION 
    //First Create a Story 
    //Then convert the story to COde 
    //Done you have the code that you Nee d
}
int main(){

    int n=2; 
    cout << towerOfHanoi(3, 1, 3, 2) << endl; // from=1, to=3, aux=2


    return 0;
}