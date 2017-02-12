#include<iostream>
using namespace std;
int main()
{
    int n,drink;
    while(cin>>n)
    {
        drink=n;
        while(n>=3)
        {
            drink=drink+(n/3);
            n=(n/3)+(n%3);
        }
        if(n==2)
        {
            drink++;
        }
        cout<<drink<<endl;
    }
    return 0;
}
