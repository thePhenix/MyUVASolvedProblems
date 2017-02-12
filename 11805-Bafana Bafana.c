#include<stdio.h>
int main()
{
    int t,c=1,n,k,p,s=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d%d",&n,&k,&p);
        if(k+p>n)
        s=(k+p)-n;
        else
        s=k+p;
        while(s>n)
        {
            s=s-n;
        }
        printf("Case %d: %d\n",c,s);
        t--;
        c++;
    }
    return 0;
}
