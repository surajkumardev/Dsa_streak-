//Backtracking Lecture 3 
#include <iostream>
#include<vector> 
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i){
    if(i==arr.size()){
        for(int it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    //includle 
    ans.push_back(arr[i]);
    printSubsets(arr,ans, i+1);


    //exclude
    //Step 4: Backtracking (undo)
    // ans.pop_back();
    // This is backtracking:
    // Remove the last included element
    // So we can try the exclude choice

    
    ans.pop_back();
    printSubsets(arr,ans,i+1);

}
int main() {
    vector<int> vec={1,2,3};
    vector<int> ans;  //to store the subsets 



    printSubsets(vec, ans, 0);
    return 0;
}
