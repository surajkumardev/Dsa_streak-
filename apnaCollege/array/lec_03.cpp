//Maximum Sum subarray

//1st we can use the brute force approach where we are finding the sum of the subarray 
//like 1 2 3 4 5 
//1 +2 
//1+2+3
//1+2+3+4 
//2+3+4+5 just like this and comparing the maximum one among these 




#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN; 
        for(int i=0;i<nums.size();i++){
            int currSum=0;
            for(int j=i;j<nums.size();j++){
                currSum=currSum+nums[j];
                maxSum=max(maxSum,currSum);
            }
        }
        return maxSum; ///TLEEEEEEEEEEEEEEEEEE
    }
};

//more optimized kadanes algorithm 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadanes algorithm 
        int cs=0;
        int ms=INT_MIN;
        for(int it: nums){
            cs=cs+it;
            ms=max(ms,cs);

            if(cs<0){
                cs=0;
            }
        }
        return ms; 
    }
};

int main() {



    return 0;
}