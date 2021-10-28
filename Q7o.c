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
    printf("reverse of number is %d",rev);
    if(rev==(b*b*b)+(c*c*c)+(a*a*a))
    {
    printf("\nreverse of entered number is an armstrong number");
    }
    else
    {
        printf("\nreverse of entered number is not an armstrong number");
    }
    return 0;
}
