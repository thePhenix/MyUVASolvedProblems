#include<stdio.h>
int main()
{
    int n,t=0;
    while(scanf("%d",&n)&&n>0)
    {
        int init=1;
        int total_line=0,pst=0;
        while(1)
        {
            if(total_line+init>n)
            {
                break;
            }
            if(total_line+init==n)
            {
                break;
            }
            total_line=total_line+init;
            init=total_line;
            pst++;


        }
        t++;
        printf("Case %d: %d\n",t,pst);
    }
    return 0;
}
