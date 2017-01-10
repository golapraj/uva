#include <stdio.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> mymap;
    string s1,s2,s3,s4,s5,s6;
    string letter="abcdefghijklmnopqrstuvwxyz";
    int p=1;
    for(int i=0; i<26; i++)
    {
        s1=letter[i];
        mymap[s1]=p++;
    }

    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            s1=letter[i];
            s2=letter[j];
            s3=s1+s2;
            mymap[s3]=p++;
        }
    }

    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                s1=letter[i];
                s2=letter[j];
                s3=letter[k];
                s4=s1+s2+s3;
                mymap[s4]=p++;
            }
        }
    }

    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                for(int l=k+1; l<26; l++)
                {
                    s1=letter[i];
                    s2=letter[j];
                    s3=letter[k];
                    s4=letter[l];
                    s5=s1+s2+s3+s4;
                    mymap[s5]=p++;
                }

            }
        }
    }

    for(int i=0; i<26; i++)
    {
        for(int j=i+1; j<26; j++)
        {
            for(int k=j+1; k<26; k++)
            {
                for(int l=k+1; l<26; l++)
                {
                    for(int m=l+1; m<26; m++)
                    {
                        s1=letter[i];
                        s2=letter[j];
                        s3=letter[k];
                        s4=letter[l];
                        s5=letter[m];
                        s6=s1+s2+s3+s4+s5;
                        mymap[s6]=p++;
                    }
                }

            }
        }
    }
    char inp[5];
    while(scanf("%s",inp)==1)
    {
        cout<<mymap[inp]<<endl;;
    }

    return 0;

}
