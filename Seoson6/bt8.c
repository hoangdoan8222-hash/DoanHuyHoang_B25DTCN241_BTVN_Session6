#include <stdio.h>

int isEven(int n)
{
    return n % 2 == 0;
}

int main(void)
{
    printf("Test 1 (2): %d\n", isEven(2));     
    printf("Test 2 (3): %d\n", isEven(3));    
    printf("Test 3 (0): %d\n", isEven(0));     
    printf("Test 4 (1): %d\n", isEven(1));    
    printf("Test 5 (-2): %d\n", isEven(-2));  
    printf("Test 6 (-3): %d\n", isEven(-3));  

    return 0;
}

