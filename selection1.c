#include<stdio.h>
int main()
{
    int a[50],i,j,n,temp,min;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements in random order : ",n);
    for(i=0; i<n; i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j] < a[min])
            min = j;
        }
            if(min!=i)

            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
    }
    printf("Sorted array : ");
    for(i=0; i<n; i++)
    printf("%d ",a[i]);
    return 0;
}