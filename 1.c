#include<stdio.h>
int main()
{
    int a[100],n,i;
    int newvalue1,newindex1,newvalue2,newindex2;

    printf(" Enter array size less than 100:- ");
    scanf("%d",&n);
    printf("\n");
    printf(" Enter %d data for an array:- ",n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("\n");
    printf(" Enter the first index where you want to insert:- ");
    scanf("%d",&newindex1);
    printf("\n");
    for(i=n-1; i>=newindex1; i--)
    a[i+1] = a[i];
    printf(" Enter the first value that you want to insert:- ");
    scanf("%d",&newvalue1);
    printf("\n");
    a[newindex1] = newvalue1;
    printf(" Enter the second index where you want to insert:- ");
    scanf("%d",&newindex2);
    printf("\n");
    for(i=n; i>=newindex2; i--)
    a[i+1] = a[i];
    printf(" Enter the second value that you want to insert:- ");
    scanf("%d",&newvalue2);
    printf("\n");
    a[newindex2] = newvalue2;
    printf(" New Element of the array are: \n");
    for(i=0; i<=n+1; i++)
    printf(" %d ",a[i]);
    return 0;
}