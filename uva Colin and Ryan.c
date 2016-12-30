#include<stdio.h>
#include<math.h>
int main()
{
    freopen("in.txt","r",stdin);
    long int t,i,c,r,q,d,j;
    scanf("%ld",&t);#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    long int t,q,r,d,c,a[200000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int z=0;
        cin>>c>>r;
        cout<<"Case #"<<i+1<<":";
        d=c-r;
        if(d==0)
        {
              cout<<" 0"<<endl;
              continue;
        }
        else
        {
            for(int j=1;j<=sqrt(d);j++)
                if(d%j==0)
            {
                    if(j>r)
                    a[z++]=j;
               else if((d/j)>r)
                    a[z++]=d/j;
            }
            sort(a,a+z);
            a[z]='\0';
            for(int i=0;a[i];i++)
                cout<<" "<<a[i];
            cout<<"\n";
        }
    }
}

    for(i=0; i<t; i++)
    {
        scanf("%ld %ld",&c,&r);
        d=c-r;
        if(d==0)
        {
            printf("Case #%ld: ",i+1);
            continue;
        }
        else
        {
            printf("Case #%ld: ",i+1);
            for(j=1; j*j<=d; j++)
            {
                if(d%j==0)
                    if(j>r)
                        printf("%ld ",j);
            }
            printf("\n");
        }
    }
    return 0;
}
