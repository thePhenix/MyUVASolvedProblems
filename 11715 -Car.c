#include<stdio.h>
#include<math.h>
int main()
{
    int cs,c=1;
    while(scanf("%d",&cs)&&cs!=0)
    {

        float u,v,s,t,a;
        if(cs==1)
        {
            scanf("%f %f %f",&u,&v,&t);

            a=((v-u)/t);
            s=((u*t)+((.5)*a*(t*t)));
            printf("Case %d: %.3f %.3f\n",c,s,a);
        }
        else if(cs==2)
        {

            scanf("%f %f %f",&u,&v,&a);
            t=(v-u)/a;
            s=((u*t)+.5*a*t*t);
            printf("Case %d: %.3f %.3f\n",c,s,t);
        }
        else if(cs==3)
        {

            scanf("%f %f %f",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",c,v,t);
        }
        else if(cs==4)
        {

            scanf("%f %f %f",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",c,u,t);
        }
        c++;
    }
    return 0;
}
