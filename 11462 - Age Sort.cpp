#include<iostream>
#include<algorithm>
using namespace std;
int n[2000000];
int main()
{
    int s,i;
    while(cin>>s && s!=0)
    {
       for(i=0;i<s;i++)
        cin>>n[i];
       sort(n,n+s);
       for(i=0;i<s;i++)
        {
            cout<<n[i];
            if(i==s-1)
                cout<<endl;
            else
                cout<<" ";
        }
    }
    return 0;
}
