#include<stdio.h>
#include<cmath>
#include<conio.h>
main()
{long long int g,t,a,d,i,j,k,partsum,comb;
double p;
scanf("%lld %lld %lld %lld",&g,&t,&a,&d);
comb=g*(t)*(t-1);
partsum=0;
if((g*a+d)%2!=0)
{p=(log((g*a+d)/2))/(log(2));
p=ceil(p);
k=2^p;
while(k>0)
{partsum=partsum+k;
k=k/2;
          }
          printf("%lld",comb/2+partsum);
          getch();                }
else{
k=((g*a)+(d))/2;
while(k>0)
{partsum=partsum+k;
k=k/2;
}
printf("%lld",comb/2+partsum);
      getch();}}
