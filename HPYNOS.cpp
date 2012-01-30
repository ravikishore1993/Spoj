#include<stdio.h>
main()
{long long int a,b,c,d,i,j,w;
scanf("%lld",&w);
while(w!=0){
            j=0;
scanf("%lld",&a);
b=a;
d=0;
r:
while(a!=0)
{
           c=a%10;
           d=d+c*c;
           a=a/10;
      
      }
      if((d!=1 && d==b) || d==16 || d==4 || d==20 || d==42 || d==145 || d==89 || d==58 || d==37)
      printf("-1\n");
      else if(d!=1)
      {j++;
           a=d;
      d=0;
      goto r;}
      else if(d==1)
      printf("%lld\n",j+1);
      w--;}}
      
      
      
