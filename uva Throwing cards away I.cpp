#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    //freopen("out.txt","w",stdout);
    int t;

    while(cin>>t&&t)
    {
         queue<int>crd,dcrd;
        for(int i=0; i<t; i++)
            crd.push(i+1);
        while(crd.size()>=2)
        {
            dcrd.push(crd.front());
            crd.pop();
            crd.push(crd.front());
            crd.pop();
        }
        cout<<"Discarded cards:";

        while(!dcrd.empty())
        {
            if(dcrd.size()==1)
                cout<<" "<<dcrd.front();
            else
                cout<<" "<<dcrd.front()<<",";
            dcrd.pop();
        }
        cout<<endl;
        cout << "Remaining card: " << crd.front() << endl;
    }
}
