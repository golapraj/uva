#include <stdio.h>
#include <string.h>
char str[100000],str1[100000];
int main()
{
    while(scanf("%s %s",str,str1)!=EOF)
    {
        long long int i,j,k,g;
        k=strlen(str);
        j=strlen(str1);
        g=0;
        for(i=0; i<j; i++)
            if(str1[i]==str[g])
                g++;
        if(g==k)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
