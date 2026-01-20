#include<iostream>
#include<vector>
using namespace std; 

//BInary Search Code
int binarySearch(vector<int> arr, int target, int start, int end){
    if(start<=end){
        int mid=start+(end-start)/2; 
        if(arr[mid]==target){
            return mid; 
        }else if(arr[mid]<=target){
            binarySearch(arr, target, mid+1,end);
        }else{
            binarySearch(arr,target, start,mid-1);
        }
    }
    return -1;
}
int main(){
    return 0;
}