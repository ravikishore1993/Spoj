#include<stdio.h>
long long fact(int);
main()
{long long int a,b,c;
r:
scanf("%lld %lld",&a,&b);
if(a!=0 && b!=0){
if((a-b)<b)
printf("1\n");
else
{printf("%lld\n",(fact(a-b))/((fact(a-2*b))*(fact(b))));
    }goto r;}
      }
long long fact(int n)
{
if (n < 0) return 0;
int f = 1;
while (n > 1)
f *= n--;
return f;
}
