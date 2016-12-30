#include<cstdio>
#include<vector>
#include<string.h>
#include<queue>
using namespace std;
#define MAX 100000
vector<int>edges[MAX];
void bfs(int,int);
int main()
{
    int n,e,i;
    bool flag;
    while(scanf("%d",&n)==1&&n)
    {
        scanf("%d",&e);
        for(i=1; i<=e; i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            edges[x].push_back(y);
        }
        bfs(n,0);
        for(i=0;i<n;i++)
            edges[i].clear();
    }
    return 0;
}

void bfs(int n,int src)
{
    int flag=0;
    queue<int>Q;
    Q.push(src);
    int taken[100000]= {0};
    taken [src]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0; i<edges[u].size(); i++)
        {
            int v=edges[u][i];
            if(!taken[v])
            {
                if(taken[u]==1)
                    taken[v]=2;
                else
                    taken[v]=1;
                Q.push(v);
            }
            else if(taken[u]==taken[v])
            {
                flag=1;
                break;
            }
        }
        Q.pop();
        if(flag)
            break;
    }
    if(flag)
        printf("NOT BICOLORABLE.\n");
    else
        printf("BICOLORABLE.\n");
}

