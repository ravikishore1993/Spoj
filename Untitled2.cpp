#include<stdio.h>
int main()
{ long int b,c,d,e,f,i,j,w[10000],x[10000],y,sum1,sum2;
printf("cases");
scanf("%ld",&y);
for(j=1;j<=y;j++)
scanf("%ld %ld",&w[j],&x[j]);
for(j=1;j<=y;j++)
{e=0;d=0;sum2=0;
{{while(w[j]!=0)
{b=w[j]%10;
 w[j]=w[j]/10;
 d=d*10+b;}}
 {while(x[j]!=0)
 {c=x[j]%10;
 x[j]=x[j]/10;
 e=e*10+c;}}}
 sum1=e+d;
 while(sum1!=0)
 {f=sum1%10;
 sum1=sum1/10;
 sum2=sum2*10+f;}
 printf("%ld\n",sum2);}
}
