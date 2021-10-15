#include<stdio.h>
void max()
{
  int n,i,res;
    scanf("%d",&n);
    printf("press any number-%d\n",n);
    for(i=1; i<=10; i++)
    {
        res=i*n;
        printf("%d*%d=%d\n",n,i,res);
    }

}
int main()
{
    max();
}
