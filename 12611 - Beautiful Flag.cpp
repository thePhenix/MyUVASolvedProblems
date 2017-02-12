#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        float r,length,hight,left,right,extra;
        cin>>r;
        getchar();
        length=5*r;
        hight=(3*length)/5;
        right=(11*length)/20;
        left=(9*length)/20;
        cout<<"Case "<<c++<<":\n";
        cout<<-left<<" "<<hight/2<<endl;
        cout<<right<<" "<<hight/2<<endl;
        cout<<right<<" "<<-hight/2<<endl;
        cout<<-left<<" "<<-hight/2<<endl;

    }
    return 0;
}
