#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ar[3];
    int i;
    while(t--)
    {
        for(i=0;i<3;i++)
            cin>>ar[i];
        sort(ar,ar+3);
        if(ar[0]+ar[1]>ar[2])
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}
