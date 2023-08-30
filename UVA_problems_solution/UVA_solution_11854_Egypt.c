#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
      {
         if((a==0)&&(b==0)&&(c==0))
         {
              break;
         }
         if((c==sqrt(a*a+b*b))||(b==sqrt(c*c+a*a))||(a==sqrt(b*b+c*c)))
         {
              printf("right\n");
         }
         else
         {
                printf("wrong\n");
         }
      }
    return 0;
}
