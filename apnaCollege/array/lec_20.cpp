https://leetcode.com/problems/merge-sorted-array/ 

//kuch samjhne laikya hai bhi nahi

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //i have to merge and sort them 
        int size=m+n;
        int it=0;
        for(int i=0;i<m;i++){
            nums1[it++]=nums1[i];
        }
        for(int j=0;j<n;j++){
            nums1[it++]=nums2[j];
        }
        sort(nums1.begin(),nums1.end());
    }
};