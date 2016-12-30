#include<stdio.h>
int main()
{
    long long t,k,l,h,s,bk,kk,kl,kh,ks,kbk,i=1;

    while((scanf("%lld", &t))!=EOF)
    {
        printf("%4lld.",i );
        if(t==0)
        {
            printf(" %lld",t);
        }
        k=t/10000000;
        if(k>0)
        {
            kk=k/10000000;
            kl=(k%10000000)/100000;
            kh=((k%10000000)%100000)/1000;
            ks=(((k%10000000)%100000)%1000)/100;
            kbk=(((k%10000000)%100000)%1000)%100;
            if(kk>0)
                printf(" %lld kuti",kk);

            if(kl>0)
                printf(" %lld lakh",kl);

            if(kh>0)
                printf(" %lld hajar",kh);

            if(ks>0)
                printf(" %lld shata",ks);

            if(kbk>0)
                printf(" %lld",kbk);
            printf(" kuti");
        }
        l=(t%10000000)/100000;
        h=((t%10000000)%100000)/1000;
        s=(((t%10000000)%100000)%1000)/100;
        bk=(((t%10000000)%100000)%1000)%100;

        if(l>0)
            printf(" %lld lakh",l);

        if(h>0)
            printf(" %lld hajar",h);

        if(s>0)
            printf(" %lld shata",s);

        if(bk>0)
            printf(" %lld",bk);
        printf("\n");
        i++;
    }
    return 0;
}
