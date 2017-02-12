#include<stdio.h>
int main()
{
 int h,m,y,s,x,t;
 scanf("%d",&t);
 while(t>0)
 {
 scanf("%d:%d",&h,&m);
 s=1440-(h*60+m);
 y=s/60;
 x=s%60;
 if(y>12)
 y=y-12;

 printf("%02d:%02d\n",y,x);
 t--;
 }
 return 0;
}
