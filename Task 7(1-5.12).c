#include<stdio.h>
void max()
{
 int i,n,z=0;
    scanf("%d",&n);
    printf("Press any number-%d\n",n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            z++;
            break;
        }
    }
    if(z==0)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not prime number");
    }
}
int main()
{
    max();
}
