// https://leetcode.com/problems/product-of-array-except-self/description/ 
//leectcode 238
//brute force 
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

//optimal solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
    
        //optimal solution using prefix and suffix sum product 
    
        //prefix product 
        vector<int> prefix(n);
        prefix[0]=1;
        for(int i=1;i<n;i++){ //skip first
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        //suffix product 
        vector<int> suffix(n);
        suffix[n-1]=1;
        for(int i=n-2;i>=0;i--){ //skip last 
            suffix[i]=suffix[i+1]*nums[i+1];
        }


        ///final answer 
        for(int i=0;i<n;i++){
            nums[i]=prefix[i]*suffix[i];
        }

        return nums;

    }
};
