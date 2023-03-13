#include<stdio.h>
int main()
{
    int salary, hra, pf, total;
    char name[50];
    printf("Enter employee name : ");
    scanf("%s",&name);
    printf("Enter salary of %s : ",name);
    scanf("%d",&salary);

    hra=(salary*12)/100;
    pf=(salary*10)/100;
    total=salary*12;

    printf("hra = %d\npf = %d\ntotal salary = %d",hra,pf,total);
    return 0;
}