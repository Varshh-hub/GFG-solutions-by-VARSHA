// User function Template for C++

int fibonacci(int n) {

    // Write your code here to calculate
    // to calculate the nth fibonacci number
    if (n == 0 || n == 1) return n;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}