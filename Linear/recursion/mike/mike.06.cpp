//iF you Feel like GIving Up remember 
//why you started 

//=========REVERSE A STACK 06 Video=============
#include<iostream> 
#include<vector> 
#include<stack> 
using namespace std; 
void Reversebrute(stack<int> &st){
    //base 
    if(st.empty()){
        return; 
    }
    //logic 
   int top=st.top();
    st.pop(); 
    Reversebrute(st);//trust faith 
    //baki ko reverse kar kai dai dega

    stack<int> temp ;
    //top sai jo nikala hai usko 
    //alag temp mai store karo 
    while(!st.empty()){
        temp.push(st.top());
        st.pop(); 
    }
    //push to top 
    //jisko nikala hai 
    st.push(top);
    //now push the remaining to the stack 
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
void insertAtBottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return; 
    }
    int top=st.top(); 
    st.pop();
    insertAtBottom(st,ele);
    st.push(top); 
}
void ReverseOptimal(stack<int> &st){
    if(st.empty()){
        return; //base case 
    }
    //using the insertAtBottom of Stack 
    int top=st.top(); 
    st.pop(); 
    ReverseOptimal(st); 

    //now instead of creating a stack 
    //by yourself => o(n) space you should  
    //do this 

    insertAtBottom(st,top);

}
===> SPACE ==> O(1)
===> TIME ==> O(n^2)


void Traversal(stack<int> &st){
    while(!st.empty()){
        cout<<st.top()<< " ";
        st.pop(); 
    }
}

int main(){

    stack<int> st; 
    st.push(10); 
    st.push(20); 
    st.push(30); 
    st.push(40); 
    st.push(50); 
    Traversal(st); 

    Reversebrute(st); 
    cout<<endl; 

    Traversal(st);


    return 0;
}