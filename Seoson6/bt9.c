#include <stdio.h>
#include <limits.h>

int isEven(int n) {
    return n % 2 == 0;
}

void testCase(int input) {
    printf("isEven(%d) = %d\n", input, isEven(input));
}

int main() {
    
    testCase(2);
    testCase(3);
    testCase(10);
    testCase(11);

   
    testCase(0);
    testCase(1);
    testCase(-2);
    testCase(-3);

   
    testCase(INT_MAX);
    testCase(INT_MIN);

    return 0;
}

