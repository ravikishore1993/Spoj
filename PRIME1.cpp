#include<stdio.h>
#include<cmath>
int isPrime(long long int);
main()
{long long int i,a,b,c,d;
int e;
scanf("%d",&e);
while(e!=0)
{scanf("%lld %lld",&a,&b);
for(i=a;i<=b;i++)
{if(isPrime(i))
printf("%lld\n",i);
                  }
e--;
printf("\n");}
      }
      
      
      
      
      
int isPrime(long long int n)
{ 

if (n < 2) return 0; 
if (n < 4) return 1; 
if (n%2 == 0) return 0; 
for (int k=3; k*k<=n;  k+= 2)
if (n%k == 0) return 0; 
return 1; }
