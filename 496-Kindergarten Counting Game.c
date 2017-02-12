#include<stdio.h>
#include<string.h>
int main()
{
    char ch[500];
    while(gets(ch))
    {
        int i,length;
        int counter=0;
        int j=1;
        length=strlen(ch);
        for(i=0;i<length;i++)
        {
            if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z'))
            {
               if(j)
                counter++;
               j=0;
            }
            else
                j=1;
        }
        printf("%d\n",counter);

    }
    return 0;
}
