#include <stdio.h>
int main()
{
    int num, u, sum = 0, r, n;
    printf("Enter a three digit number ");
    scanf("%d", &num);
    u = num % 10;
    sum = sum + u;
    r = num / 10;
    u = r % 10;
    sum = sum + u;
    n = r / 10;
    sum = sum + n;
    printf("sum is %d", sum);
    return 0;
}