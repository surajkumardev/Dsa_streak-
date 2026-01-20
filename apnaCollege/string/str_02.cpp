//reverse a string 
#include <iostream>
#include <vector>
#include <map>
#include<string>
#include <set>  
#include<algorithm> 
using namespace std;

//function
// void reverses(string &str){
//     int st=0;
//     int end=str.length()-1;
//     while(st<end){
//         swap(str[st],str[end]);
//         st++;
//         end--;
//     }
// }

int main() {
    string str="SURAJ KUMAR DEV";

    reverse(str.begin(),str.end()); //inbuilt function

    for(char ch: str){
        cout<<ch<<" ";
    }

return 0;
}