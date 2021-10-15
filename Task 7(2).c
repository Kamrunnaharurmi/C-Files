#include<stdio.h>
int main()
{
  int n,i,arr[105];
  scanf("%d",&n);
  printf("Enter array value: ");
  for(i=1;i<=n;i++)
  {
      scanf("%d",&arr[i]);
  }
   printf("The array values are:");
   for(i=n;i>=1;i--)
   {
       printf("%d ",arr[i]);
   }
    return 0;
    }
