https://leetcode.com/problems/count-primes/description/


//brute force tle 

class Solution {
public:
    bool isPrime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        if(n<=1){
            return 0;
        }
        int count=0; 
        for(int i=2;i<n;i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
    }
};

//optimal approach to solve the question

class Solution {
public:
    int countPrimes(int n) {
        // using seive of
        vector<bool> isPrime(n + 1, true);
        // if(n<=1){
        //     return 0;
        // }
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
                for (int j = i * 2; j < n; j = j + i) {
                    // all mutiple of i should be marked as false
                    // as they can't be a prime number
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
};


















class Solution {
    // bool isPrime(int n){
    //     if(n==0 || n==1) return false; 
    //     for(int i=2;i*i<=n;i++){
    //         if(n%i==0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
public:
    int countPrimes(int n) {
           if (n <= 2) return 0;

    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) count++;
    }
    return count;
    }
};


//gcd or HCF of two number 
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
        if(a==0){
            return b;
        }
        return a; 
    }
}

//euclid algorithm using recursion 

int gcdRec(int a, int b){
    if(b==0) return a; 


    return gcdRec(b, a%b);
}


int gcd(int a, int b){
    if(b==0) return a; 
   return  gcd(b, a%b);
}
int lcm(int a, int b){
    lcm*hcf=a*b;
    lcm=a*b/hcf; 
    return a*b/gcd(a,b);
}

//revers a given number 

int reverse(int num){
    int ans=0; 

    153-> 351
    while(num>0){
        int rem=num%10; ///3 , 5, 1
        ans =ans*10+rem; //3,30+5 => 35*10+1-> 351
        num=num/10;
    }
    return ans; 
}


pair<int,int> result; 
int arr[2][2]={{1,2},{3,4}};

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        if(arr[i][j]==target){
            result.first=i;
            result.second=j;
            return result;
        }
    }
}
return {-1,-1};


///code to find the sum of values from the 
//maximum column SUm

int columnSum(int arr[2][2], int row, int column) {
    int maxColumnSum = INT_MIN; 

    for(int j = 0; j < column; j++) {   // loop over columns
        int columnI = 0;
        for(int i = 0; i < row; i++) {  // loop over rows
            columnI += arr[i][j];
        }
        maxColumnSum = max(maxColumnSum, columnI);
    }

    return maxColumnSum; 
}
//diagonal of a twod matrix 
int diagonalSum(int arr[2][2], int row, int column) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            // primary diagonal (top-left to bottom-right)
            if (i == j) {
                sum += arr[i][j];
            }
            // secondary diagonal (top-right to bottom-left)
            else if (j == column - i - 1) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
//optimization to find the sum 

int diagonalSum(int arr[2][2], int row, int column) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        // primary diagonal
        sum += arr[i][i];

        // secondary diagonal (avoid double-counting middle element if odd size)
        if (i != column - i - 1) {
            sum += arr[i][column - i - 1];
        }
    }
    return sum;
}
