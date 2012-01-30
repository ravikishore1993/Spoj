#include<stdio.h>
long long fact(int);
main()
{long long int a,b,c,k,j,i;
r:
scanf("%lld %lld",&a,&b);
if(a!=0 && b!=0){
if(a<b)
printf("0\n");
else if((a-b)<b)
printf("1\n");
else
{k=1;
for(j=0;j<=b;j++)
k=k*(a-b-j);
for(i=0;i<b;i++)
k=k/(b-i);

    printf("%lld\n",k);
    }goto r;}
      }

