#include<stdio.h>
int main()
{
    int i,c;
    long long fibo[81];
    fibo[0]=1;
    fibo[1]=1;
    for(i=2;i<=80;i++)
        fibo[i]=fibo[i-1]+fibo[i-2];
    while(scanf("%d",&c)==1&&c)
    {
        printf("%lld\n",fibo[c]);
    }
    return 0;
}
