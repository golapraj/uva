#include <stdio.h>
int main()
{
    char *lan[]= {"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE"},input[15];
    int i;
    for(i=1;;i++)
    {
        while(scanf("%s",&input)==1)
        {
            if(input[0]=='#' && input[1]=='\0')
                return 0;
            else if(strcmp(lan[0],input)==0)
                printf("Case %d: ENGLISH\n",i);
            else if(strcmp(lan[1],input)==0)
                printf("Case %d: SPANISH\n",i);
            else if(strcmp(lan[2],input)==0)
                printf("Case %d: GERMAN\n",i);
            else if(strcmp(lan[3],input)==0)
                printf("Case %d: FRENCH\n",i);
            else if(strcmp(lan[4],input)==0)
                printf("Case %d: ITALIAN\n",i);
            else if(strcmp(lan[5],input)==0)
                printf("Case %d: RUSSIAN\n",i);
            else
                printf("Case %d: UNKNOWN\n",i);
                break;
        }
    }
    return 0;
}
