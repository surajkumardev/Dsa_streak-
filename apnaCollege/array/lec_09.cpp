//Binary search code -> {ARRAY MUST BE SORTEDDDDD}
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>   
using namespace std;
bool binarySearch(vector<int> &arr, int target){
    //bs is divide and conquer type of alog
    ///tc -> o(logn)
    int start=0;
    int end=arr.size()-1;
    while(start<=end){ //= ->in case of one element
        int mid=start+(end-start)/2; //optimize
        if(arr[mid]==target){
            return true;

            // break;  🤓🤬(nothing execute after the return)
        }
        else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return false;
}


//Bs(recursive)
bool BsR(vector<int> &arr,int target,int start,int end){

    if(start > end) {          // ✅ base case
        return false;
    }



    int mid=start+(end-start)/2;

    if(arr[mid]==target){
        return true;
    }

    else if(arr[mid]<target){
        BsR(arr,target,mid+1,end);
    }
    
    else{
        BsR(arr,target,start,mid-1);
    }

    return false;

}

int main() {
    vector<int> vec = {10,20,30,40,50,60};

    cout << binarySearch(vec, 24) << endl;
    cout << BsR(vec, 24, 0, vec.size() - 1);

    return 0;
}
