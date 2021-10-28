#include <stdio.h>
int main()
{ 
    int a,n,bit;
    printf("enter a number \n");
    scanf("%d",&a);
    printf("enter the bit you want to find (0-31)\n");
    scanf("%d",&n)&1;
    bit=(a>>n);
    printf("the %d bit of %d is %d",n,a,bit);
    return 0;
}
