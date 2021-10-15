#include<stdio.h>
void max()
{
  int n,i,count=0;
scanf("%d",&n);
printf("n=%d\n",n);
for(i=0;i<=n;i+=2)
{
    printf("%d ",i);
    count++;
}
printf("\ncount=%d even numbers found between the range 0 to %d\n",count,n);

}
int main()
{
    max();
}
