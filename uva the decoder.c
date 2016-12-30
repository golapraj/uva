#include<stdio.h>
int main()
{

  /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    char s[1000];
    int i,l;
    while(scanf("%s",s)==1)
    {


        l=strlen(s);
        for(i=0; i<l; i++)
        {
            printf("%c",s[i]-7);
        }
        printf("\n");
    }
    return 0;
}
