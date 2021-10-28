#include <stdio.h>
#define BITS sizeof(int)*8
int main()
{ 
    int a,msb;
    printf("enter a number \n");
    scanf("%d",&a);
    msb = 1 << (BITS - 1);
    (a&msb)?printf("MSB of %d is set(1)",a):printf("MSB is %d is not set(0)",a);
    return 0;
}
