#include<stdio.h>

int main()
{
    int t;
    while(scanf("%d",&t))
    {
        if(t==0)
            break;
        int mat[t][t],i,j;

        for(i=0; i<t; i++)
        {
            for(j=0; j<t; j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }

//
//        for(i=0; i<t; i++)
//        {
//            for(j=0; j<t; j++)
//            {
//                printf("%d\t",mat[i][j]);
//            }
//            printf("\n");
//        }



        int r = 0;
        int ri = 0;
        int s = 0;

        for(i = 0; i<t; i++)
        {
            s = 0;
            for(j=0; j<t; j++)
            {
                s = s + mat[i][j];
            }
            if(s%2!=0)
            {
                ri = i;
                r++;
            }
        }

        int c = 0;
        int ci = 0;
        s = 0;

        for(i = 0; i<t; i++)
        {
            s = 0;
            for(j=0; j<t; j++)
            {
                s = s + mat[j][i];
            }
            if(s%2!=0)
            {
                ci = i;
                c++;
            }
        }

        if(r==0&&c==0)
            printf("OK\n");
        else if(r==1&&c==1)
            printf("Change bit (%d,%d)\n",ri+1,ci+1);
        else
            printf("Corrupt\n");

    }

    return 0;
}
