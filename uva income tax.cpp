#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()

{
    long long v, p, q;
    long long m, x, orig_m;
    while (cin >> m >> x)
    {
        if (!m && !x)
            return 0;
        if (m==1 || x==0 || x==100)
        {
            printf("Not found\n");
            continue;
        }
        v = (100*(m-1)) / (100-x);
        if (( (100*(m-1)) % (100-x) ) == 0)
            v--;
        if (v<m)
        {
            printf("Not found\n");
        }
        else
        {
            cout << v << endl;
        }
    }
    return 0;
}

