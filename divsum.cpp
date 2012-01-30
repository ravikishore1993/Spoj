#include<stdio.h>
#include<math.h>
long int  t,k,a,j,e,i,w[200001];
int main()
{
scanf("%d",&a);
for(i=1;i<=a;i++)
scanf("%d",&w[i]);
for(i=1;i<=a;i++)
{e=1;
t=sqrt(w[i]);
for(j=2;j<=t;j++)
if(w[i]%j==0)
{k=w[i]/j;
e=e+j+k;
}if(w[i]==t*t)
e=e-t;
printf("%d\n",e);}}
