#include<stdio.h>
#include<cmath>
main()
{double a[10],b[10],c[10],d[10];
for(int i=0; i<10;i++)
scanf("%lf %lf",&a[i],&b[i]);
for(int i=0;i<10;i++)
{c[i]=(a[i]-b[i])/2;
if(ceil(c[i])-c[i]==0)
printf("%0.lf\n%0.lf\n",c[i]+b[i],c[i]);
}
}
