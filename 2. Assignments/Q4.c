#include <stdio.h>
int main()
{
    int a = 12, b = 32;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped number is %d and %d", a, b);
    return 0;
}