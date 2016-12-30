#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);

    int i,r,c,j;
    int tc=1;
    char mine[200][200];
    int mineout[200][200];

    while(scanf("%d %d",&r,&c))
    {
        if(r==0&&c==0)
            break;
        if(tc!=1)
            printf("\n");

        for(i=0; i<200; i++)
        {
            for(j=0; j<200; j++)
            {
                mineout[i][j]=0;
            }

        }



        for(i=0; i<r; i++)
            scanf("%s",&mine[i]);

        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(mine[i][j]=='*')
                {
                    mineout[i][j]=9999;

                    if((mine[i-1][j]!='*')&&((i-1)>=0||j>=0))
                        mineout[i-1][j]++;
                    if((mine[i-1][j-1]!='*')&&((i-1)>=0||(j-1>=0)))
                        mineout[i-1][j-1]++;
                    if((mine[i-1][j+1]!='*')&&((i-1)>=0||(j+1)>=0))
                        mineout[i-1][j+1]++;

                    if((mine[i][j+1]!='*')&&(i>=0||(j+1)>=0))
                        mineout[i][j+1]++;
                    if((mine[i][j-1]!='*')&&(i>=0||(j-1)>=0))
                        mineout[i][j-1]++;

                    if((mine[i+1][j]!='*')&&((i+1)>=0||j>=0))
                        mineout[i+1][j]++;
                    if((mine[i+1][j-1]!='*')&&((i+1)>=0||(j-1)>=0))
                        mineout[i+1][j-1]++;
                    if((mine[i+1][j+1]!='*')&&((i+1)>=0||(j+1)>=0))
                        mineout[i+1][j+1]++;

                }
            }
        }

        printf("Field #%d:\n",tc);
        tc++;

        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(mineout[i][j]==9999)
                    printf("%c",'*');
                else
                    printf("%d",mineout[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
