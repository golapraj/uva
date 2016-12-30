#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
double func(double a, double b, double c)
{
    if(a+b<c || b+c<a || c+a<b)
        return 0;
    double s=(a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

main()
{
    int t,n;
    double side[10010];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>side[i];

        sort(side,side+n);

        double mx=0.0;
        for(int i=n-1; i>1; i--)
            mx=max(mx,func(side[i],side[i-1],side[i-2]));

        printf("%.2lf\n",mx);
    }
    return 0;
}
