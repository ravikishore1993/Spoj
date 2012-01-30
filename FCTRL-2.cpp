#include<stdio.h>
main()
{long double i,a,fact,j;
scanf("%lf",&a);
while(a!=0){
            fact=1;
scanf("%lf",&j);
for(i=1;i<=j;i++)
fact=fact*i;
printf("%0.lf\n",fact);      
      a--;}
      }
      
