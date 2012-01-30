#include<iostream.h>
#include<conio.h>
main()
{int a,b,c,d;
scanf("%d %d %d",&a,&b,&c);
if(a!=0 && b!=0 && c!=0)
{if((b-a)==(c-b))
printf("AP %d",((c-b)+c));
else
printf("GP %d",((c*b/a)));
getch();
                 
        }
      }
