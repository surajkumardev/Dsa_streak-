class Solution {
public:
    string reverseWords(string s) {
        //how to reverse  a words in the string 
        string ans="";
        reverse(s.begin(),s.end());
        //done 

        int n=s.length();
        //now crea a word 
        for(int i=0;i<n;i++){
            string word="";
            while(i<n && s[i]!=' '){
                word=word+s[i];
                i++;
            }   
            //now the word is here 
            //now reverse the word it self and
            //add to ther result
            reverse(word.begin(),word.end());

           if(word.length()>0){ 
                ans=ans+" "+word;

           }
        }



        return ans.substr(1);
    }
};