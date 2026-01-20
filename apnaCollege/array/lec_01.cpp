//codes 
//1. reverse the array element using two pointer 

#include<iostream>
using namespace std;
// void reverse(int arr[7]){ //insisde a function array become pointer not an array 
//     int st=0;
//     // int end=arr.size()-1;❌❌❌
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int end=sz-1;
//     while(st<end){
//         swap(arr[st],arr[end]);
//         st++;
//         end--;
//     }
// }
//CoRRECTTTTTTT WAYYYYYYYYYY

void reverse(int arr[],int sz){
    int st=0;
    int end=sz-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int sz=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,sz);

    for(int it: arr){
        cout<<it<<" ";
    }

    return 0;
}