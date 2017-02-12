#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char c[105];
    int l;
    while(gets(c))
    {
        int i,k,s=1;
        int len=strlen(c);
        l=c[0]-'0';
        if(l==0)
            break;
        l=(len-2)/l;
        for(k=2;k<len;k+=l)
        {
            s+=l;
            i=s;
            for(i;i>=k;i--)
            {
                cout<<c[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
