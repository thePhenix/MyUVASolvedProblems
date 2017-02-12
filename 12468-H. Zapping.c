#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k;
    while(scanf("%d %d",&i,&j)==2&&i>=0&&j>=0)
    {
        k=abs(i-j);
        if(k>=50)
            k=100-k;
        printf("%d\n",k);
    }
    return 0;
}
