#include<stdio.h>
void max()
{
   int x,y,n,z;
    scanf("%d",&n);
    printf("Press any number-%d\n",n);
    x=n;
    while(x!=0)
    {
        y=x%10;
        z=z*10+y;
        x=x/10;
    }
    if(z==n)
    {
        printf("%d is  not a palindrome number\n",n);
    }
    else
    {
        printf("%d is a palindrome number\n",n);
    }
}
int main()
{
    max();
}
