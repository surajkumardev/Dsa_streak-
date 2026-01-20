#include <iostream>
#include <vector>
#include <map>
#include<string>
#include <set>  
using namespace std;

int main() {
    string str; 
    // cin>>str; 


    getline(cin,str);




    str="Krish Ka gana"; //mutable here 
    //dynamic in nature can change in the run time 
    for(char ch: str){
        cout<<ch<<" ";
    }
    cout<<endl;

    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    //characther array 
    char arr[]={'a','b','c','d','\0'};

    for(char ch: arr){
        cout<<ch<<" ";
    }



    return 0;
}   