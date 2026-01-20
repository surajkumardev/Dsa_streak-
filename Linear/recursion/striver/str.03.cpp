//Lecture Re 4.
#include<iostream> 
#include<vector> 
using namespace std; 

//Q.1 Reverse an array
//Using two pointer Approach 
void reverse(vector<int> &arr){
    int start=0;
    int end =arr.size()-1; 
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}    


// Using Recursion 
void RecReverse(vector<int> &arr,int start,int end){
    if(start>=end){
        return; 
    }
    swap(arr[start],arr[end]);
    RecReverse(arr, start+1, end-1);
}


//---another way using only one pointer 
void OneReverse(vector<int> &arr,int i){
    int n=arr.size();
    if(i>=n/2){
        return; 
    }
    swap(arr[i],arr[n-i-1]);
    OneReverse(arr, i+1);
}


//Q.2 Check Palindrome or not
//without recursion
bool Check_palindrome(int num){
    int bachakairakho=num; 
    int sum=0;
    while(num>0){
        int rem=num%10; 
        sum=sum*10+rem; 
        num=num/10;
    }
    if(sum==bachakairakho){
        return true; 
    }


    return false; 
}

void RecPalindrome(int num,bool &ans_one){
    if(num<=0){
        return;
    }

    int n=num;
    int rem=num%10;
    int sum=sum*10+rem;
    if(sum==n){
        ans_one=true;
    }

    RecPalindrome(num/10, ans_one);
}


//Program 2 
//check if the given string is palidrome or not 
bool isPalindrome(string st, int start, int end){
    if(start >= end){
        return true;
    }
    if(st[start] != st[end]){
        return false;
    }
    return isPalindrome(st, start+1, end-1);
}

//more  easily check if(arr[i]!=arr[n-i-1]) then return answer

bool isPaldinr(string st, int i){
    int n=st.size(); 
    if(i>=(n/2)){
        return true; 
    }
    if(st[i]!=st[n-i-1]){
        return false; 
    }
    return isPaldinr(st, i+1);
}

