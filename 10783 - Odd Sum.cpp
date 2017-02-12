#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int c,a,b;
    cin>>c;
    for(int j=1;j<=c;j++)
    {
        cin>>a>>b;
        int sum=0;
        for(int k=a;k<=b;k++)
        {
            if(k%2!=0)
            {
                sum=sum+k;
            }
        }
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
    return 0;
}
