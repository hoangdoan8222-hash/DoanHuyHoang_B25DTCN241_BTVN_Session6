#include <stdio.h>

int fibonacciSum(int n) {
    int prev, curr, next;
    int sum;
    int i;

    if (n <= 0)
        return 0;

    prev = 0;
    curr = 1;
    sum = 1;

    for (i = 2; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
        sum += curr;
    }

    return sum;
}

int main() {
    int testCases[4];
    int size;
    int i;

    testCases[0] = 0;
    testCases[1] = 1;
    testCases[2] = 5;
    testCases[3] = 10;

    size = 4;

    for (i = 0; i < size; i++) {
        printf("n = %d -> Tong Fibonacci = %d\n",
               testCases[i],
               fibonacciSum(testCases[i]));
    }

    return 0;
}

