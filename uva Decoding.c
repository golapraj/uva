#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    char ch;
    int i,num,t,k;
    scanf("%d",&t);
    getchar();
    for(k=1; k<=t; k++)
    {
        printf("Case %d: ",k);
        while(scanf("%c%d",&ch,&num)==2)
        {
            for(i=0; i<num; i++)
            {
                printf("%c",ch);
            }
        }
        printf("\n");
    }
    return 0;
}
