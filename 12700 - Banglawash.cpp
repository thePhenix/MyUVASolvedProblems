#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char c;
    int j,n,i,cas=1;
    cin>>j;
    for(int k=0;k<j;k++)
    {
      int b=0,w=0,t=0,a=0;
      cin>>n;
      for(i=1;i<=n;i++)
      {
        cin>>c;
        if(c=='B')
            b++;
        else if(c=='W')
            w++;
        else if(c=='T')
            t++;
        else if(c=='A')
            a++;
      }
      cout<<"Case "<<cas++<<": ";
      if((b+a)==n && b!=0 )
        cout<<"BANGLAWASH"<<endl;
      else if((w+a)==n && w!=0)
        cout<<"WHITEWASH"<<endl;
      else if(a==n)
        cout<<"ABANDONED"<<endl;
      else if(b==w)
        cout<<"DRAW "<<b<<" "<<t<<endl;
      else if(w>b)
        cout<<"WWW "<<w<<" - "<<b<<endl;
      else if(b>w)
        cout<<"BANGLADESH "<<b<<" - "<<w<<endl;
    }

   return 0;
}
