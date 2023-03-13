#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a values of a b c\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c)
    {
        printf("value of a: %d is greater",a);
    }
    else if (b>=a && b>=c)
    {
        printf("value of b: %d is greater",b);
    }
    else
    {
        printf("value of c: %d is greater",c);
    }
return 0;
}    