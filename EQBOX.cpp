#include<stdio.h>
main()
{long long int a,b,c,d,e,f,g;
scanf("%lld",&g);
while(g>0)
{
          scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
         if((c*d)>=(a*b))
          printf("Box cannot be dropped.\n");
          else
         if((c>=b && c>=a) || (d>=b && d>=a))
          {if((a*a+b*b)<=(c*c+d*d))
          printf("Box cannot be dropped.\n");
          else printf("Escape is possible.");
          }
          else printf("Escape is possible.");
          g--;
}         
}
