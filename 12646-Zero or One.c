#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        char win;
        if(a==b)
        {
            if(b!=c)
            win='C';
            else
            win='*';
        }
        else if(b==c)
        {
            win='A';
        }
        else
            win='B';
        printf("%c\n",win);
    }
    return 0;

}
