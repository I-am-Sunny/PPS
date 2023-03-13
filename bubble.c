#include<stdio.h>
int main()
{
    int a[] = {3,9,5,4,7,2,1,10},i,j,n,temp,min;
    for(i=1; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[i]>a[j+1])
            {
                a[j]=temp;
                a[j+1]=a[j];
                temp=a[j+1];
            }
       }
    }
    printf("Sorted array : ");
    for(i=0; i<n; i++)
    printf("%4d",a[i]);
    return 0;
}