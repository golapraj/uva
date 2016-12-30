#include<stdio.h>

int main()
{
    int t,r,c,k,l,m,n;
    scanf("%d",&t);
    int i;

    for(i=0; i<t; i++)
    {
        scanf("%d %d",&r,&c);

        char array[r][c];
        int arr[r];

        for(k=0; k<r; k++)
        {
            scanf("%s",&array[k]);
        }

       int min=9999,sum=0,dif;

        for(l=0;l<r;l++)
        {
            for(m=0;m<c;m++)
            {
                if(array[l][m]=='0')
                    arr[l]=m;
            }
        }

        for(n=0;n<r;n++)
            printf("%d\n",arr[n]);

        for(n=0;n<c;n++)
        {
            for(k=0;k<r;k++)
            {
              dif=arr[k]-n;
              if(dif<0)
                dif=dif*-1;
              sum=sum+(dif);
            }
        }

    }
}
