#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int tc,t;

    scanf("%d",&tc);
    char ch;
    scanf("%c",&ch);
    for(t=1; t<=tc; t++)
    {
        char s[10002];
        gets(s);
        int n,i,j,p,l;
        double k;
        n=strlen(s);
        k=sqrt(n);
        l=(int) k;
        char c[l][l];
        if(l!=k)
        {
            printf("INVALID\n");
        }
        else
        {

            p=0;
            for(i=0; i<l; i++)
            {
                for(j=0; j<l; j++)
                {
                    c[i][j]=s[p];
                    p++;
                }
            }
            for(i=0; i<l; i++)
            {
                for(j=0; j<l; j++)
                {
                    printf("%c",c[j][i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

