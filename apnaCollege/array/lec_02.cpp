//program to find the intersection of two arrays 
// Hidden Limitation (Exam / Interview)
// If arrays contain duplicate elements, your code gives wrong result.
// Example
// arr1 = {1,1,2}
// arr2 = {1}

#include<iostream>
#include<vector> 
#include<map>
using namespace std;

int main(){
    vector<int> arr1={1,2,3,4,5,10}; 
    vector<int> arr2={10,20,30,40,50};

    map<int,int> mp; 

    ///logic 
    //find the freq of each elment and if the freq is only one then addd that 
    for(int it: arr1){
        mp[it]++;
    }

    for(int it: arr2){
        mp[it]++;
    }
    //answer 
    for(auto it: mp){
        if(it.second>=2){
            cout<<it.first<<" ";
        }
    }





    return 0;
}

//correct logic
 vector<int> arr1 = {1,2,3,4,5,10}; 
    vector<int> arr2 = {10,20,30,40,50};

    map<int,int> mp;

    for(int it : arr1){
        mp[it]++;
    }

    for(int it : arr2){
        if(mp[it] > 0){
            cout << it << " ";
            mp[it] = 0; // avoid duplicate printing
        }
    }
