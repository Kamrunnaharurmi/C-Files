#include<stdio.h>
void max()
{
  int n,x=0,y=1,z,i;
    scanf("%d",&n);
    printf("Press any number-%d\n",n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",x);
        z=x+y;
        x=y;
        y=z;
    }
}
int main()
{
    max();
}
