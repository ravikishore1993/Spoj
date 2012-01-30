#include<stdio.h>
main()
{int a,b,c;
scanf("%d",&c);
while(c!=0){
scanf("%d%d",&a,&b);
if( a==b+2 || a==b)
{ if(a%2==0)
printf("%d\n",a+b);
else
printf("%d\n",a+b-1);
}
else
printf("No Number\n"); 
c--;}
     
      }
