#include<stdio.h>
main()
{int a,b,c;
r:
scanf("%d %d",&a,&b);
if(a!=-1 && b!=-1){
if(a==1 || b==1)
printf("%d+%d=%d\n",a,b,a+b);
else 
printf("%d+%d!=%d\n",a,b,a+b);
goto r;}
      }
      
