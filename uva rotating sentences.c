#include<stdio.h>
#include<string.h>
int main()
{
    freopen("in.txt","r",stdin);
    char sen[101][102];
    int k=0,l,max=0,i,j;
    while(gets(sen[k]))
        k++;
    for(i=0; i<k; i++)
    {
        l=strlen(sen[i]);
        if(l>max)
            max=l;
        for(j=l; j<100; j++)
            sen[i][j]=' ';
        sen[i][100]='\0';
    }
    for(i=0; i<max; i++)
    {
        for(j=k-1; j>=0; j--)
            printf("%c",sen[j][i]);
        printf("\n");
    }
    return 0;
}
