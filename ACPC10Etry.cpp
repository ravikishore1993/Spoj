#include<stdio.h>
#include<cmath>
#include<conio.h>
#include<cmath>
main()
{long long int g,t,a,d,i,j,comb;
double p,partsum,k;
scanf("%lld %lld %lld %lld",&g,&t,&a,&d);
comb=g*(t)*(t-1);
partsum=0;
if(floor(log((g*a+d)/2)/log(2))!=log((g*a+d)/2)/log(2))
{p=(log((g*a+d)/2))/(log(2));
p=ceil(p);
k=1;
while(p!=0){
k=k*2;
p--;}
while(k>0)
{partsum=partsum+k;
k=floor(k/2);
          }
          printf("%0.lf",comb/2+partsum);
          getch();                }
else{
k=((g*a)+(d))/2;
while(k>0)
{partsum=partsum+k;
k=int(k/2);
}
printf("%lld",comb/2+partsum);
      getch();}}
