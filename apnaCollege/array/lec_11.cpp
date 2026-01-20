https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int n=arr.size(); 
        int st=1, end=arr.size()-2; 
        //-> will remove the edge cases that it handles as the peak index is not 
        //the first and the last index 


        while(st<=end){
            int mid=st+(end-st)/2; //use this only
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
                        return mid;
                else if(arr[mid-1]<arr[mid]){ //right //increasing slope to right mai search karenge
                            st=mid+1;
                 }
                else{ //left sub array
                            end=mid-1; //decreasing to left mai search karenge
            }
        
        }
        return -1;
    }
};


   
//approcah-> 
//as the o(logn)->Which makes it used of binary search algorithm 