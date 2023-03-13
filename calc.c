#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter the two numbers respectively : ");
    scanf("%d%d",&a,&b);
    printf("Which task do you want to perform...\n1. addition\n2. subtraction\n3. product\n4. divide\n5. reminder");
    scanf("%d",&r);
    if(r==1)
    printf("%d",a+b);
    if(r==2)
    printf("%d",a-b);
    if(r==3)
    printf("%d",a*b);
    if(r==4)
    printf("%d",a/b);
    if(r==5)
    printf("%d",a%b);
    return 0;
}