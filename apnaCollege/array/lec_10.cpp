// 33. Search in Rotated Sorted Array
/*
First -> You can think that you can apply binary search but there is a problem 
that the array is not sorted 
//so you need to modify the logic of the binary search algorithm 
*/
//MOdified binary search to find the answer



class Solution {                                  //REVISE REGURALY
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int st=0;
        int end=n-1;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(arr[mid]==target){
                return mid; 
            }

            //now check the left or right half is sorted 
            if(arr[st]<=arr[mid]){ //left half is sorted
            //check left or right 
                if(arr[st]<=target && target<=arr[mid]){
                    end=mid-1; //matlab ki left mai hai
                } else{
                    st=mid+1;
                }
            }
        
            else{//right half is sorted
                //check the right half 
                if(arr[mid]<=target && target<=arr[end]){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};