#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

/*
Q1. Linear search in 2D array
Return position (row, col) using pair
*/
pair<int,int> linearSearch2D(int arr[2][2], int target) {
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(arr[i][j] == target){
                return {i, j}; //{i,j};
            }
        }
    }
    return {-1, -1};   
}

/*
Q2. Find maximum row sum in 2D array
*/
int maxRowSum(int arr[2][2]) {
    int max_sum = 0;
    for(int i = 0; i < 2; i++){
        int sum = 0;
        for(int j = 0; j < 2; j++){
            sum += arr[i][j];
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

/*
Q3. Find maximum column sum in 2D array
*/
int maxColumnSum(int arr[2][2]) {
    int max_sum = 0;
    for(int j = 0; j < 2; j++){
        int sum = 0;
        for(int i = 0; i < 2; i++){
            sum += arr[i][j];
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

/*
Q4. Find sum of primary and secondary diagonals (O(n))
*/
int diagonalSum(int arr[2][2]) {
    int n = 2;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i][i];               // primary diagonal
        if(i != n - i - 1){
            sum += arr[i][n - i - 1];   // secondary diagonal
        }
    }
    return sum;
}
/*&5.Digonal Sum */
int diagonalS(int arr[2][2]) {
    int n = 2;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            // primary diagonal
            if(i == j) {
                sum += arr[i][j];
            }
            
            // secondary diagonal (avoid double count)
            else if(j == n - i - 1) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int arr[2][2] = {{10,20},{30,40}};

    pair<int,int> pos = linearSearch2D(arr, 10);
    cout << "Element found at: " << pos.first << " " << pos.second << endl;
    
    cout << "Maximum row sum: " << maxRowSum(arr) << endl;

    cout << "Maximum column sum: " << maxColumnSum(arr) << endl;

    cout << "Diagonal sum: " << diagonalSum(arr) << endl;

    return 0;
}
