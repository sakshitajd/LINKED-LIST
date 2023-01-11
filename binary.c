#include<stdio.h>
int main()
{
    int n,arr[20];
    int r,search;
    int first,last,middle;
    int i;
    printf("enter the no. of elements :");
    scanf("%d",&n);
    printf("enter elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter element to be search :");
    scanf("%d",&r);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
        first=middle+1;
        else if(arr[middle]==search)
        {
            printf("\n the number %d found at %d position",r,i+1);
        }
        else
        last=middle-1;
        middle=(first+last)/2;
    }
    if(first>last)
    printf("\n the number %d is not found",r);
    return 0;
}