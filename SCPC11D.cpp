#include<stdio.h>
main()
{long long int a,b,c;
r:
scanf("%lld %lld %lld",&a,&b,&c);
if(a!=0 &&  b!=0 && c!=0){
if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
printf("right\n");
else
printf("wrong\n");
goto r;}
      
      }
