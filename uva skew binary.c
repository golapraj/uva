#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[100];
    long long i,c,s,l;
    while(gets(a))
    {
        s=0;
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            c=a[i]-'0';
            s+=c*(pow(2,(l-i))-1);
        }
        if(s==0)
            break;
        printf("%lld\n",s);
    }
    return 0;
}
