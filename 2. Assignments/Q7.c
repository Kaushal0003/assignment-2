#include <stdio.h>
int main()
{
    int n = 11, t;
    t = n & 1;
    if (t == 0)
    {
        printf("%d is even", n);
    }
    else
        printf("%d is odd", n);
    return 0;
}