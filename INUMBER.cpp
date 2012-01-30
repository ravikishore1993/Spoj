#include<stdio.h>
#include<math.h>
double rem(double);
main()
{double p,a=0,b,c,d,i,sum;
int q;
      scanf("%d",&q);
while(q!=0){
      scanf("%lf",&p);
for(i=1;;i++)
{b=p*i;
sum=0;
while(b!=0)
{c=rem(b);
sum=sum+c;
b=floor(b/10);}
if(sum==p)
break;
}
printf("%0.lf\n",p*i);
q--;}
}

double rem(double b)
{double a=11,i=0;
while(a>=10)
{a=b-10*i;
i++;}
return a;
            }
     
