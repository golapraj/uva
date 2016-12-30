#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,e,d,p,kk;
    char encode[1000],decode[1000],sss[1000];
    freopen("in.txt","r",stdin);
    while(gets(sss))
    {
        e=0;
        d=0;
        if((int)sss[0]>=48 && (int)sss[0]<=57)
            d=1;
        else
            e=1;
        if(e==1)
        {
            i=strlen(sss);
            for(j=i-1; j>=0; j--)
            {
                k=(int)sss[j];
                while(k>=10)
                {
                    p=k%10;
                    k=k/10;
                    printf("%d",p);
                }
                printf("%d",k);


            }
            printf("\n");
        }
        else if(d==1)
        {
            i=strlen(sss);
            kk=0;
            for(j=i-1; j>=0; j--)
            {
                if( (kk>=65 && kk<=90)==0 && (kk>=97 && kk<=122)==0 && kk!=32 && kk!=33 && kk!=44 && kk!=46 && kk!=58 && kk !=59 && kk!=63 )
                {
                    kk=(kk*10)+(int)sss[j]-48;
                }
                else
                {
                    printf("%c",kk);
                    kk=(int)sss[j]-48;
                }

            }
            printf("%c",kk);
            printf("\n");
        }
    }
    return 0;
}
