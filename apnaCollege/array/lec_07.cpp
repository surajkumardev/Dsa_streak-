// productExceptSelf 238. Product of Array Except Self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //brute force 
    int n=nums.size();
    vector<int> ans(n,1); 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                ans[i]=ans[i]*nums[j];
            }
        }
    }
    return ans;
    }
};
//optimal apporach 

