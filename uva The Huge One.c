#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in.txt","r",stdin);
    long long int t,n,s,i,l,j,vs,c;
    char nbr[100000];
    scanf("%lld",&t);
     while(t--)
    {
        vs=c=0;
       scanf("%s",nbr);
        l=strlen(nbr);
        scanf("%lld",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&s);
            for(j=0; j<l; j++)
            {
                vs=(vs*10 + nbr[j]-'0')%s;
            }
            if(!vs)
                c++;
        }

        if(c==n)
           printf("%s - Wonderful.\n",nbr);
           else
            printf("%s - Simple.\n",nbr);

    }
}
