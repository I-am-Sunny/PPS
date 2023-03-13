#include<stdio.h>
int main ()
{
    int a,s,temp;
    printf("Enter any two number : ");
    scanf("%d%d",&a,&s);
    printf("Before swapping : a = %d and b = %d\n",a,s);

    a = temp;
    s = a;
    temp = s;
    
    printf("After swapping : a = %d and b = %d",a,s);
    return 0;
}