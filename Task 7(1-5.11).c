#include<stdio.h>
void max()
{
  int i,n,z=1;
scanf("%d",&n);
printf("Press any number-%d\n",n);
printf("Factorial=");
printf("1");
for(i=2;i<=n;i++)
{
    z=z*i;
    printf("*%d",i);
}
printf("=%d\n",z);
}
int main()
{
    max();
}
