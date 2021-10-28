#include <stdio.h>
int main()
{ 
    int a;
    printf("enter a number \n");
    scanf("%d",&a);
    (a&1==1)?printf("LSB of %d is set(1)",a):printf("LSB is %d is not set(0)",a);
    return 0;
}
