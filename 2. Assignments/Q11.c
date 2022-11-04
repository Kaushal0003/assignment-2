#include <stdio.h>
int main()
{
    float ind, INR = 76.23, USD = 1;
    printf("Enter amount in INR");
    scanf("%f", &ind);
    float a = (USD / INR) * ind;
    printf("INR in USD is %f", a);
    return 0;
}