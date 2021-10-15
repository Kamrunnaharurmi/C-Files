#include<stdio.h>
int main()
{
    int n,i,arr[105],x=0,y=0;
    scanf("%d",&n);
    printf("Enter the size: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        x+=arr[i];
        printf("%d ",arr[i]);
        if(i<n)
        {
            printf("+ ");
        }
    }
    printf(" = %d",x);
    y=x/n;
    printf("\nAverage is: %d/%d = %d",x,n,y);
    return 0;
}
