#include<stdio.h>
#include<cmath>
main()
{double a,s,n,s1,s2,t=sqrt(3);
scanf("%lf",&s);
while(s!=0){
scanf("%lf",&n);
a=pow((4*n),(0.3333333333333333333333));
s1=a*a*t/2;
s2=12*n/(a*t);
printf("%lf\n",s1+s2);
 s--;     
      }}
      
