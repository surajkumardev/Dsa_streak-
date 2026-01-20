//majorityElement 169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp; 
        for(int it: nums){
            mp[it]++;
        }
        int n=nums.size();
        for(auto it: mp){3
            if(it.second>(n/2)){
                return it.first;
                break;
            }
        }
        return -1;
    }
};