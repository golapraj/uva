#include<cstdio>
#include<vector>
#include <string.h>
using namespace std;
#define MAX 100000
#define white 1
#define black 2
vector<int>edges[MAX];
int main()
{
    int n,e,i;
    while(scanf("%d",&n)==1&&n)
    {
        scanf("%d",&e);
        for(i=1; i<=e; i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        int taken[1000];
        memset(taken,0,sizeof(taken));
        int flag=0;
        for(i=1; i<=e; i++)
        {
            if(taken[i]==0)
            {
                taken[i]= white;
            }
            int s = edges[i].size();
            for(int j=0; j<s; j++)
            {
                if(taken[edges[i][j]]==taken[i])
                {
                    flag=1;
                    break;

                }
                else if(taken[edges[i][j]]==0 )
                {

                    if(taken[i]==1)
                        taken[edges[i][j]]=black;
                    else
                        taken[edges[i][j]]=white;
                }
            }
            if(flag==1)
            {
                printf("NOT BICOLORABLE.\n");
                break;
            }
        }
        if(i==e+1)
            printf("BICOLORABLE.\n");
        for(int i=0; i<=n; i++)
            edges[i].clear();
    }
    return 0;
}
