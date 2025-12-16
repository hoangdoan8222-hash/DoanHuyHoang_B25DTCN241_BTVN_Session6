#include <stdio.h>

int sumOddNumbers(int n)
{
    int sum = 0;   
    int i;         
    for (i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main(void)
{
    int n;
    int result;

    printf("Nhap n: ");
    scanf("%d", &n);

    result = sumOddNumbers(n);

    printf("Tong cac so le nho hon %d la: %d\n", n, result);

    return 0;
}

