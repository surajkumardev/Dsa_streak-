// https://leetcode.com/problems/permutation-in-string/

//Brute force Code
class Solution {
public:
    bool isPresent(string s1,string s2){

     return s2.find(s1) != string::npos;

    }
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end()); //////Sorting is important when 
        //you are writing the 
        do {
            if (isPresent(s1, s2)) return true;
        } while (next_permutation(s1.begin(), s1.end()));

        return false;
    }
};

//Better Optimal Code 
