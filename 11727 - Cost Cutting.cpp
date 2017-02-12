#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    long long a[3];
    while(t--)
    {
        for(int i=0;i<3;i++)
            cin>>a[i];
        sort(a,a+3);
        cout<<"Case "<<j++<<": "<<a[1]<<endl;
    }
    return 0;
}
