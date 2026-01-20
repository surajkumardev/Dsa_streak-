// Re 5. Multiple Recursion Calls | Problems | Strivers A2Z DSA Course
class Solution {
public:
    int fib(int n) {
        // base case
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        /// other cases
        return fib(n - 1) + fib(n - 2);
    }
};
