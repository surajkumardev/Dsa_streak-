/*
Single Element in Sorted Array -> 
--> dekh kar hi samajh jayega 
--> bahut simple hai
--> But binary search use nahi kiya hai 
*/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //map ana chaiye 
        //1st way
        map<int,int> mp; 
        for(int it: nums){
            mp[it]++;
        }

        for(auto it: mp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;

        //2nd way
        //single hai to xor to must hai but o(n) tc  you need to search whole array 
        int ans=0; 
        for(int it: nums){
            ans=ans xor it;
        }
        return ans;
    }
};



//OPTIMAL USING BINARY SEARCH
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //{optimal-----> Using Binary Search }
        int n=nums.size();
            int l=0;
            int h=n-1; 
            while(l<h){
                int mid=l+(h-l)/2; 
                bool isEven; 
                if((h-mid)%2==0){
                    isEven=true;
                }else{
                    isEven=false; 
                }
                //check your bagal wala element (mid+1)
                if(nums[mid]==nums[mid+1]){
                    if(isEven){
                        l=mid+2; 
                    }else{
                        h=mid-1; 
                    }
                }else{
                    if(isEven){
                        h=mid;
                    }else{
                        l=mid+1;
                    }
                }
            }
            return nums[h];
    }
};