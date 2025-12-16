#include <stdio.h>

int isPrime(int n)
{
    int divisor;

    if (n < 2)
        return 0;

    for (divisor = 2; divisor * divisor <= n; divisor++)
    {
        if (n % divisor == 0)
            return 0;
    }

    return 1;
}

int main(void)
{
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d la so nguyen to\n", n);
    else
        printf("%d khong phai la so nguyen to\n", n);

    return 0;
}

