#include<stdio.h>
main()
{long long int a;
r:
scanf("%lld",&a);
while(a!=0){
printf("%lld\n",((a)*(a+1)*(2*a+1))/6);
goto r;
      }}
