#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
   long int n,g,s,r,i,point,z=0;
    while(scanf("%ld %ld",&n,&g)==2)
    {
        point=0;
        z=0;
        long int gol[100000]= {};
        for(i=0; i<n; i++)
        {
            scanf("%ld %ld",&s,&r);
            if(s>r)
                point+=3;
            else
                gol[z++]=(r-s);

        }
        sort(gol,gol+z);
        for(i=0; i<z; i++)
        {
            if(g-(gol[i]+1)>=0&&g)
            {
                g=g-(gol[i]+1);
                point+=3;
            }
            else if ((g-gol[i])==0)
            {
                point++;
                g=g-gol[i];
            }
        }
        printf("%ld\n",point);
    }
    return 0;
}
