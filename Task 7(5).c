#include<stdio.h>
int main()
{
    int n,i,arr[105],x=arr[0],y=arr[0];
    scanf("%d",&n);
    printf("Enter the size of the Array:%d",n);
    printf("\nEnter Array values: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(x<arr[i])
        {
          x=arr[i];
        }
        else
        {
          y=arr[i];
        }
    }
    printf("Maximum element is: %d\n",x);
    printf("Minimum element is: %d\n",y);
    return 0;
}
