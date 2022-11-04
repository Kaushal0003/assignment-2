#include <stdio.h>
int main()
{
    int n, c;
    printf("Enter a number and digit");
    scanf("%d%d", &n, &c);
    int t = n / 10;
    t = (t * 10) + c;
    printf("After append a digit %d the resulting number is %d", c, t);
    return 0;
}