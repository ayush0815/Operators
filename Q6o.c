#include <stdio.h>

int main()
{
    int a,b,c,rev;
    printf("enter the number\n");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    rev=b*100+c*10+a;
    printf("%d",rev);

    return 0;
}
