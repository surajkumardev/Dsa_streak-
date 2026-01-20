#include <iostream>
#include <vector>
#include <map>
#include <set>
#include<queue> 

//
///PRIORITY QUEUE 
//


using namespace std;

int main() {

    priority_queue<int> q; 
    //by defalut max heap or the 
    //descending order mai sort hota hai 
    q.push(10);
    cout<<endl;
    q.push(102);
    cout<<endl;
    q.push(103);
    cout<<endl;

    q.push(103);
    cout<<endl;

    q.push(210);
    cout<<endl;

    q.push(103);

    //iterate
    while(!q.empty()){
        cout<<q.top();
    cout<<endl;

        q.pop();
    }    
    cout<<endl;


    //min heap kai liye 
    //increasing order mai sort karega 
    //by default max heap hi hota hai c++ mai 
    //and min heap hota hai java mai 
    //greater<int> functor 
    priority_queue<int,vector<int>, greater<int>> qq; 
    qq.push(10);
    qq.push(10);
    qq.push(120);
    qq.push(104);
    qq.push(102);
    qq.push(105);
cout<<" WELCOME TO THE TANVI WORLD"<<endl;
    while(!qq.empty()){
        cout<<qq.top();
        cout<<" ";
        qq.pop();
    }




    return 0;
}


