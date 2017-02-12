#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a,b,c,d,e,f,g,h, t;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

        k=0;
        j=0;

        if((e>=g)&&(f>=g))
        j=e+f;
        else if((e>=f)&&(g>=f))
        j=e+g;
        else if((f>=e)&&(g>=e))
        j=g+f;

        k=j/2;


        m=a+b+c+d+k;

        if(m>=90)
            printf("Case %d: A\n", i);
        else if((m<90)&&(m>=80))
                printf("Case %d: B\n", i);
        else if((m<80)&&(m>=70))
                printf("Case %d: C\n", i);
        else if((m<70)&&(m>=60))
                printf("Case %d: D\n", i);
        else if(m<60)
                printf("Case %d: F\n", i);
    }
    return 0;
}
