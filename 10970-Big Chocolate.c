#include<stdio.h>
int main()
{
    int m,n,p;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        p=m*n;
        printf("%d\n",p-1);
    }
    return 0;
}
