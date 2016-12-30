#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,m;
    char s1[1000][25],s2[1000][25],s[1000][25];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(s1[i]);
        gets(s2[i]);
    }
    scanf("%d",&m);
    getchar();
    for(i=0; i<m; i++)
    {
        gets(s[i]);
        for(j=0; j<n; j++)
        {
            if(strcmp(s[i],s1[j])==0)
            {
                printf("%s\n",s2[j]);
                break;
            }
        }
    }
    return 0;
}

