#include<stdio.h>
#include<cmath>
main()
{double a,b;
int c;
scanf("%d",&c);
while(c!=0){
      scanf("%lf",&a);
      b=log(a)/log(2);
      printf("%0.lf\n",ceil(b)+1);
      c--;}
      }
