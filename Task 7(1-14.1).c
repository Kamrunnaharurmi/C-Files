#include<stdio.h>
void max()
{
  int n,x=0,y=1,z=0,i;
    scanf("%d",&n);
    printf("Press any number-%d\n",n);
    while(z<n)
    {
        if(z<=1)
        {
            i=z;
        }
        else
        {
            i=x+y;
            x=y;
            y=i;
        }
        printf("%d ",i);
        z++;
    }
}
int main()
{
    max();
}
