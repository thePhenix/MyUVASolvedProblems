#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctype.h>
#include<cstdlib>
using namespace std;
int main()
{
    char ch1[1000];
    while(gets(ch1))
    {
        char ch2[1000];
        int k=strlen(ch1)-1;
        int j=k;
        for(int i=0;i<strlen(ch1);i++)
        {
            ch2[j--]=ch1[i];
        }

        if(ch2[0]>='0' && ch2[0]<='9')
        {
            int num=0;
            for(int i=0;i<=k;i++)
            {
                num=num*10+(ch2[i]-'0');
                if((num>=65 && num<=90)||(num>=97 && num<=122)||(num==32||num==33||num==44||num==46||num==58||num==59||num==63))
                {
                    printf("%c",num);
                    num=0;
                }
            }

        }

        else
        {
            for(int i=0;i<=k;i++)
            {
              while(ch2[i]!=0)
              {
                  printf("%d",ch2[i]%10);
                  ch2[i]/=10;
              }
            }
        }
        cout<<endl;
    }
    return 0;
}
