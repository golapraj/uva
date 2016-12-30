#include<stdio.h>
void main()
{
    char n1[500];
    char n2[500];
    int m[500];
    int l1, l2;

    int i,j,rem, lmax, sum,t,z;
    scanf("%d",&t);
    getchar();
    for(z=0; z<t; z++)
    {
        while(1)
        {
            scanf("%s", &n1);
            scanf("%s", &n2);

            l1 = strlen(n1);
            l2 = strlen(n2);

            lmax = l1;
            if(l1<l2)
            {
                lmax = l2;
            }

            rem=0;
            for(i=0; i< lmax; i++)
            {
                if(l1==l2 || (i < l1 && i < l2))
                {
                    sum = rem+(n1[i])+(n2[i])-96;
                }
                else if(i >=l1)
                {
                    sum = rem+(n2[i])-48;
                }
                else if(i >=l2)
                {
                    sum = rem+(n1[i])-48;
                }
                m[i] = sum%10;
                rem = sum/10;
            }

            if(rem)
            {
                m[i]=rem;
                i++;
            }

            for(j=0; j < i; j++)
            {
                if(m[j]>0)
                    printf("%d", m[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
