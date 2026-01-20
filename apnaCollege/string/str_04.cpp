https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isAlpha(char ch){
        if(isalnum(ch)){
            return true;   //alphalnumeric ->(0-9), (a-z) wale hote hai
        }else{
            return false; 
        }
    }
    bool isPalindrome(string s) {
        int st=0; 
        int end=s.size()-1; 
        while(st<end){
            if(!isAlpha(s[st])){
                st++;
                continue;
            }

            if(!isAlpha(s[end])){
                end--;
                continue;
            }


            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};