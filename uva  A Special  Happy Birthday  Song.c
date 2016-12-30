#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,j,k,c=0,z=0;
    char s[100][100];
    char golap[16][10] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%s",s[i]);
    if(n>16)
    {
        k=(int)ceil(n/16)+1;
    }
    else
        k=1;
    for(j=0; j<16*k; j++)
    {
        if(c==n)
            c=0;
        if(z==16)
            z=0;
        printf("%s: %s\n",s[c++],golap[z++]);
    }
    return 0;
}
