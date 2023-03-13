#include<stdio.h>
int main()
{
    int a[100], pos, i, n;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements : ");
    for(i=0; i<n; i++)
    scanf("%d",a[i]);
    printf("Enter the location you want to delete : ");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("Enter a valid position");
    }
    else
    for(i=pos-1; i<n-1; i++)
}