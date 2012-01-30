
#include<stdio.h>
main()
{int a;
r:
scanf("%d",&a);
if(a!=42)
{printf("%d\n",a);
goto r;}
}
