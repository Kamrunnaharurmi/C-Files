#include<stdio.h>
int main()
{
    int N,i,sum;
    scanf("%d",&N);
    printf("N=%d\n",N);
    while(N>=1)
    {
        sum+=N;
        printf("%d",N);
        N--;
        if(N>=1)
        {
            printf("+");
        }
    }
    printf("=%d\n",sum);
    return 0;
}
