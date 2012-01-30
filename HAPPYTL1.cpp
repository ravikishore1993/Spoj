#include<stdio.h>
bool coincide(long int,long int,long int,long int);
main()
{long int i,j,e,f,g,h,n=0;
r:
scanf("%ld %ld",&e,&f);
while(e!=0 && f!=0){
long int a[e],b[e],c[f],d[f];
for(i=0;i<e;i++)
scanf("%ld %ld %ld %ld",&g,&h,&a[i],&b[i]);
for(j=0;j<f;j++)
scanf("%ld %ld",&c[j],&d[j]);
for(j=0;j<f;j++)
{for(i=0;i<e;i++){
if(coincide(a[i],b[i],c[j],d[j]) )
 n++;}
printf("%ld\n",n);
n=0;
}

goto r;}
}
bool coincide(long int r,long int s,long int t,long int u)
{long int a;
if(r>t)
{if(r<t+u)
return 1;
return 0;}
else if (r<t)
{if(t<r+s)
return 1;
return 0;}
else if (r==t)
return 1;
else
return 0;
      
 }
