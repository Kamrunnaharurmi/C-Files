#include<stdio.h>
void max()
{
   int n,x,y,z;
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        z=x;
        for(y=1;y<=n;y++,z++)
        {
            printf("%d",z);
        }
        printf("\n");
    }
}
int main()
{
    max();
}
