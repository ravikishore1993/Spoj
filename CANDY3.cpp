#include<stdio.h>
#include<cmath>
main()
{long long int t;
scanf("%lld",&t);
while(t!=0){
      long long int a;
scanf("%lld",&a);
long long int b,c=0;
for(long long int i=0;i<a;i++)
{scanf("%lld",&b);
 c=(c+b)%a;       }
 if(c==0)
 printf("YES\n");
 else
 printf("NO\n");
    t--;  }
      }
