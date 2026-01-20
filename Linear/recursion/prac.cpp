#include<iostream> 
#include<vector> 
using namespace std;
//sumf of n natural number using recursion 
void reverse(vector<int> & arr){
    int start=0; 
    int end=arr.size()-1; 
    while(start<=end){
        swap(arr[start],arr[end]);
        start++; 
        end--; 
    }//iterative way 
}
void recReverse(vector<int> &arr, int start, int end){
    if(start>=end){
        return; 
    }
    swap(arr[start],arr[end]);
    recReverse(arr, start+1, end-1);
}
//using one pointer 
void onerec(vector<int> &arr, int i){
    int n=arr.size();
    if(i>=n/2){
        return; 
    }
    swap(arr[i],arr[n-i-1]);
    onerec(arr, i+1);
}

int main(){


    return 0;
}