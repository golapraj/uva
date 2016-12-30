#include<iostream>
#include <iomanip>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int> tree;
    int n;
    int trees;
    string s;

    cin>>n;
    getline(cin,s);
    getline(cin,s);
    for(int i=0; i<n; i++)
    {
        trees = 0;
        tree.clear();
        if(i>0)
            cout<<endl;
        while(true)
        {
            getline(cin,s);
            if(s.length()==0)
                break;
            tree[s]++;
            trees++;
        }
        std::cout << std::setprecision(4) << std::fixed;
        map<string, int>::iterator it;
        for (it = tree.begin(); it != tree.end(); it++)
        {
            cout<< it->first <<" "<<setprecision(4)<<(it->second * 100.0)/trees <<endl;
        }

    }

    return 0;
}
