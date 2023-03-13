#include<stdio.h>
int main()
{
    int dvnd,dvsr,rem,quo;
    printf("Enter divedend and divisor respectively : ");
    scanf("%d%d",&dvnd,&dvsr);
    
     rem=dvnd%dvsr;
     quo=dvnd/dvsr;
    printf("reminder is %d \nquotient is %d",rem,quo);
    return 0;
}