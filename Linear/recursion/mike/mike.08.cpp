#include<iostream> 
#include<vector> 
using namespace std; 
//================MERGE SORT CODE USING RECURSION=====================
void MergeFunction(vector<int> &arr,int start, int mid, int end){
    //what i need to do 
    //i need left array 
    //i need right array 
    vector<int> left; 
    vector<int> right; 
    vector<int> all; 

    for(int i=start;i<=mid;i++){   // left array
        left.push_back(arr[i]);
    }
    for(int i=mid+1;i<=end;i++){   // right array
        right.push_back(arr[i]);
    }
    //now do the comparison part 
    int i=0; 
    int j=0; 
    int k=start; 
    while(i<left.size() && j<right.size()){
        if(left[i]<right[j]){
            arr[k]=left[i];   // put in original array
            i++;
            k++;
        }
        else{
            arr[k]=right[j];  // put in original array
            j++;
            k++;
        }
    }
    ///now the baki wale 
    while(i<left.size()){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<right.size()){
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int start, int end){
    //just like binary search divide the array 
    if(start>=end) return; // base case
    int mid=start+(end-start)/2; 
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end); 

    MergeFunction(arr, start, mid, end); 
}

int main(){
    vector<int> arr={50,40,30,20,10};
    mergeSort(arr, 0, arr.size()-1); 

    for(int it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
