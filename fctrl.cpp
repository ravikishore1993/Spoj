#include<stdio.h>
#include<math.h>
int main()
{long int a,b,c,d,i,j;
scanf("%ld",&j);
while(j!=0)
{scanf("%ld",&a);
b=0;
for(i=a;i>0;i--)
{if(i%5==0)
{b++;
c=i;
r:
d=c/5;
if(d%5==0 && d!=0)
{b++;
if(d/5!=0)
{c=d/5;
goto r;}}}}
printf("%ld \n",b);
j--;}
return 0;}
