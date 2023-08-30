#include <stdio.h>
int main()
{
      int a,i;
      double e,d,f,c;
      scanf("%d",&a);
      for(i=1;i<=a;i++)
        {
           scanf("%lf %lf",&c,&f);
           e=9*c/5+f;
           d=e*5/9;
           printf("Case %d: %.2lf\n",i,d);
        }
     return 0;
}
