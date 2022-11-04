#include <stdio.h>
int main()
{
    int n;
    printf("Enter a three digit number ");
    scanf("%d", &n);
    n = (n % 10) * 100 + (n / 10);

    printf("Number after rotation is %d", n);
    return 0;
}