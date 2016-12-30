#include<stdio.h>
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    char sen[1000];
    int az,ward=0,i;

    while(gets(sen))
    {
        az=1;
        ward=0;
        for(i=0; sen[i]; i++)
        {
            if(sen[i]>='a'&&sen[i]<='z'||sen[i]>='A'&&sen[i]<='Z')
            {
                while(az)
                {
                    ward++;
                    az=0;
                }
            }
            else
                az=1;
        }
        printf("%d\n",ward);
    }
    return 0;
}
