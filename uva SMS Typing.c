#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i,p=1,j,sum,l,t;
    scanf("%d",&t);
    getchar();
    while(p<=t)
    {

        sum=0;
        gets(s);
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if((s[i]=='a')||(s[i]=='d')||(s[i]=='g')||(s[i]=='j')||(s[i]=='m')||(s[i]=='p')||(s[i]=='t')||(s[i]=='w')||(s[i]==' '))
                sum=sum+1;
            else if((s[i]=='b')||(s[i]=='e')||(s[i]=='h')||(s[i]=='k')||(s[i]=='n')||(s[i]=='q')||(s[i]=='u')||(s[i]=='x'))
                sum=sum+2;
            else if((s[i]=='c')||(s[i]=='f')||(s[i]=='i')||(s[i]=='l')||(s[i]=='o')||(s[i]=='r')||(s[i]=='v')||(s[i]=='y'))
                sum=sum+3;
            else if((s[i]=='s')||(s[i]=='z'))
                sum=sum+4;
        }
        printf("Case #%d: %d\n",p,sum);
        p++;
    }
    return 0;
}


