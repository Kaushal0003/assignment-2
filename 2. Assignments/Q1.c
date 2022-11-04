#include <stdio.h>
int main()
{
    int num = 123;
    int unit = num % 10;
    printf("Unit digit of %d is %d", num, unit);
    return 0;
}