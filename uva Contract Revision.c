#include <stdio.h>
#include <string.h>
char n, con[200], output[200], output_final[200];
int main()
{
    int  i,j,k, lenth, z=0;
    while(scanf(" %c %s", &n, &con)==2)
    {
        if(n=='0' && con[0]=='0')
            break;
        lenth=strlen(con);

        for(i=0, j=0; i<lenth; i++)
        {
            if(con[i]!=n)
            {
                output[j]=con[i];
                j++;
            }
        }
        output[j]='\0';

        if(output[0]=='\0')
            printf("0\n");

        else if(output[0]!='0')
            printf("%s\n", output);

        else if(output[0]='0')
        {
            for(i=0, k=0, z=0; i<j; i++)
            {
                if(output[i]!='0')
                    z=1;

                if(z==1)
                    output_final[k++]=output[i];
            }
            output_final[k]='\0';

            if(output_final[0]=='\0')
                printf("0\n");
            else
                printf("%s\n", output_final);
        }
    }
    return 0;
}

