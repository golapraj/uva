#include<iostream>
#include<stdio.h>
using namespace std;
int sumt(int k)
{
    return ((k*(k+1))/2)-3;
}
int sumr(int k)
{
    return ((k*(k+1))/2)-6;
}
int main()
{
    int d,r,t;
    while(scanf("%d %d %d",&d,&r,&t)==3)
    {
        int x,y,z=r+t;
        for(int i=3;; i++)
        {
            x=i;
            y=x+d;
            if(z==(sumt(x)+sumr(y)))
            {
                break;
            }
        }
        cout<<r-sumr(y)<<endl;
    }
    return 0;
}
