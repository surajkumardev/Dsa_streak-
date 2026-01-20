//what is recurision-> 
// 1. when a funciton call itself until a specified 
// condition is met
// 2. recursion must need a base condition
// 3. otherwise stack overflow will happen.
//4. Stack overlow all lead to -------(segmentataion) fault

/*
Backtracking => Backtracking is a problem 
solving technique using recursion , where we
build a solution step by step and if one step and if one step doesn't lead to valid answer 
we undo (backtrack) that step and try another answer
Try=> Recurse => Undo => Try Next




*/
#include<iostream> 
#include<vector> 
using namespace std; 
//1st code -> basic counter
void print(int num){
    if(num>3){
        return;
    }
    cout<<num<<endl; 
    print(num+1);
    // print(num++); --error 
}
// 2nd Code=> print Name 5 times 
void prints(string name,int n){
    if(n==5){
        return ;
    }
    cout<<name<<endl;
    prints(name,n+1);
}
// 3rd Code=> Print from 1 to N using recursion
void from1ToN(int first, int n){
    // int first=0;
    if(first>n){
        return;
    }
    cout<<first<<endl;
    // first=first+1; //this is wrong approach 
    // from1ToN(n+1);
    from1ToN(first+1,n);
}

//4th Code => Print from N to 1 using recursion
void fromNto1(int last){
    if(last<0){
        return;
    }
    cout<<last<<endl;
    fromNto1(last-1);
}

//backTracking-> 
// N to 1
void printNto1(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printNto1(n-1);
}
//1 to n 
void printtoN(int n){
    if(n==0){
     //no element   
        return;
    }
    printtoN(n-1);// recurse first
    cout<<n<<" ";  // print after recursion (backtracking)
    // Here, printing after recursion is a form of backtracking: we go deep first, then print while coming back.

}
//5th Code Number of Subsets 
void Subsets(vector<int> &nums, int i, vector<int> &current){
    if(i==nums.size()){
        //print the current subset;
        for(int it: current){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    //choice 1: include nums[i]
    current.push_back(nums[i]);
    subsets(nums,i+1,current);

    //backtrack(undo the choice)
    current.pop_back();

    //choice 2: exclude nums[i];
    subsets(nums,i+1,current);
}



int main(){
    print(0);
    prints("Suraj",0);
    from1ToN(1,5);
    fromNto1(5);
    return 0;
}
