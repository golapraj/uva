#include <stdio.h>
int main()
{
 long int c,p,n,i;
 i=1;
 while(scanf("%ld",&n)!=EOF)
 {
  c=1;p=0;
  if(n<1)
   break;
  else if(n==1)
   p=0;
  else
  {
   while(1)
   {
    c*=2;
    if(c>=n)
     {
      p++;
      break;
     }
    else
     p++;
   }
  }
  printf("Case %ld: %ld\n",i++,p);
 }
 return 0;
}
