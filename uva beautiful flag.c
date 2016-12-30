#include<stdio.h>
int main()
{
	int t,count=1;
	scanf("%d",&t);
	while(t--)
	{
		int n,x,xx,y;
		scanf("%d",&n);
		x=5*n*9/20;
		xx=5*n*11/20;
		y=5*n*6/10/2;
		printf("Case %d:\n",count++);
		printf("-%d %d\n%d %d\n%d -%d\n-%d -%d\n",x,y,xx,y,xx,y,x,y);
	}
	return 0;
}
