#include<stdio.h>
#include<string.h>
int main()
{

    while(1)
    {
        char st1[200];
        char st2[200];
        char st3[200];
        memset(st1,0,200);
        memset(st2,0,200);
        memset(st3,0,200);
        int i,length,length2,l;
        int j=0;
        gets(st1);
        if(strcmp(st1,"DONE")==0)
        {
            break;
        }
        length=strlen(st1);

        for(i=0;i<length;i++)
        {
            if(st1[i]!='.' && st1[i]!=',' && st1[i]!='!' && st1[i]!='?' && st1[i]!=' ')
            {
                st2[j++]=st1[i];
            }
        }
        length2=strlen(st2);
        l=length2-1;
        for(i=0;i<length2;i++)
        {
            if(st2[i]<'a')
            {
                st2[i]=st2[i]+32;
            }

        }

        for(i=0;i<length2;i++)
        {
            st3[i]=st2[l];
            l--;
        }
        if(strcmp(st2,st3)==0)
        {
            printf("You won't be eaten!\n");
        }
        else
            printf("Uh oh..\n");
    }
    return 0;
}
