#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    char ch[25];
    while(gets(ch))
    {
        int len=strlen(ch);
        int sum=0;
        for(int j=0;j<len;j++)
        {
            if(ch[j]>='A' && ch[j]<='Z')
                sum=sum+abs(ch[j]-38);
            else
                sum=sum+abs(ch[j]-96);
        }

        int prime;
        for(int j=2;j<=sum/2;j++)
        {
            if(sum%j==0)
            {
                prime=0;
                break;
            }
            else
                prime=1;
        }
        if(sum==1 || sum==2)
            prime=1;

        if(prime==1)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
