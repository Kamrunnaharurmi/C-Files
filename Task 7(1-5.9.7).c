#include<stdio.h>
void max()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}
int main()
{
    max();
}
