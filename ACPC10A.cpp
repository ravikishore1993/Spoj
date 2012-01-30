#include<stdio.h>
main()
{int a,b,c,d;
r:
scanf("%d %d %d",&a,&b,&c);
if(a!=0 || b!=0 || c!=0)
{if(a==0 || b==0 || c==0)
printf("AP %d \n",((c-b)+c));
 else       if((b-a)==(c-b))
printf("AP %d \n",((c-b)+c));
else
printf("GP %d \n",((c*b/a)));
                 
goto r;        }
        
      }
