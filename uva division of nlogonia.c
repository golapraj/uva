#include <stdio.h>
int main()
{
    int test,division_x,division_y,x,y,i,f_x,f_y;
    while(scanf("%d",&test)==1 && test!=0)
    {
        scanf("%d %d",&division_x,&division_y);
        for(i=0; i<test; i++)
        {
            scanf("%d %d",&x,&y);
            if(x==division_x || y==division_y)
                printf("divisa\n");
            else
            {
                f_x=x-(division_x);
                f_y=y-(division_y);
                if(f_x>0&&f_y>0)printf("NE\n");
                else if(f_x<0&&f_y>0)
                    printf("NO\n");
                else if(f_x<0&&f_y<0)
                    printf("SO\n");
                else if(f_x>0&&f_y<0)
                    printf("SE\n");
            }
        }
    }
    return 0;
}

