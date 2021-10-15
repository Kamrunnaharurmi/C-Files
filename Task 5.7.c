#include<stdio.h>
int main()
{
    int n,f,l;
    scanf("%d",&n);
    printf("Press any number-%d\n",n);
    l=n%10;
    while(n!=0)
    {
        f=n%10;
        n=n/10;

    }
    printf("First digit=%d\nLast digit=%d\n",f,l);

    return 0;
}
