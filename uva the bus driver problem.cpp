#include<stdio.h>
#include <algorithm>
 using namespace std;
int main()
{
    int n,d,r,i,mr[150],ar[150],p,ot;
    while(scanf("%d %d %d",&n,&d,&r)==3 && n && r && d)
    {
        for(i=0; i<n; i++)
            scanf("%d",&mr[i]);
        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);
            sort(mr,mr+n);
            sort(ar,ar+n);
            ot=0;
            for(i=0;i<n;i++)
            {
                p=mr[i]+ar[n-i-1];
                if(p>d)
                    ot+=(p-d)*r;
            }
            printf("%d\n",ot);
    }
    return 0;
}
