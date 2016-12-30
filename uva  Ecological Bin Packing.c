#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    long int i,b1,b2,b3,g1,g2,g3,c1,c2,c3,bin[6],mn;
    while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {
        mn=0;
        bin[0]=b2+b3+c1+c3+g1+g2; //bcg
        bin[1]=b2+b3+g1+g3+c1+c2;  //bgc
        bin[2]=c2+c3+b1+b3+g1+g2; //cbg
        bin[3]=c2+c3+g1+g3+b1+b2; //cgb
        bin[4]=g2+g3+b1+b3+c1+c2; //gbc
        bin[5]=g2+g3+c1+c3+b1+b2;  //gcb
        mn=bin[0];
        for(i=0; i<6; i++)
        {
            if(mn>bin[i])
                mn=bin[i];
        }
        for(i=0; i<6; i++)
        {
            if(bin[i]==mn)
            {
                if(i==0)
                    printf("BCG %ld\n",mn);
                else if(i==1)
                    printf("BGC %ld\n",mn);
                else if(i==2)
                    printf("CBG %ld\n",mn);
                else if(i==3)
                    printf("CGB %ld\n",mn);
                else if(i==4)
                    printf("GBC %ld\n",mn);
                else if(i==5)
                    printf("GCB %ld\n",mn);
                break;
            }
        }


    }
    return 0;
}
