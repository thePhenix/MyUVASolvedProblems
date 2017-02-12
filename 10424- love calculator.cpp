#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char n1[50];
    char n2[50];
    while(gets(n1))
    {
        gets(n2);
        int sum1=0,sum2=0;
        int i,len1,len2;
        len1=strlen(n1);
        len2=strlen(n2);
        for(i=0;i<len1;i++)
        {
            if((n1[i]>=65 and n1[i]<=90) ||(n1[i]>=97 and n1[i]<=122) )
            {
                if(n1[i]>=65 and n1[i]<=90)
                    sum1+=n1[i]-64;
                else
                    sum1+=n1[i]-96;
            }
        }

        for(i=0;i<len2;i++)
        {
            if((n2[i]>=65 and n2[i]<=90) ||(n2[i]>=97 and n2[i]<=122) )
            {
                if(n2[i]>=65 and n2[i]<=90)
                    sum2+=n2[i]-64;
                else
                    sum2+=n2[i]-96;
            }
        }
        int s1=0,s2=0,t;
        while(sum1>0)
        {
            s1+=sum1%10;
            t=sum1/=10;
            if(t==0 && s1>9)
            {
                sum1=s1;
                s1=0;
            }
        }
        while(sum2>0)
        {
            s2+=sum2%10;
            t=sum2/=10;
            if(t==0 && s2>9)
            {
               sum2=s2;
               s2=0;
            }
        }
        double r;
        if(s1>s2)
        {
            r=(double)(s2*100)/s1;
        }
        else
            r=(double)(s1*100)/s2;

        printf("%.2lf %%\n",r);
        memset(n1,0,50);
        memset(n2,0,50);
    }

    return 0;
}
