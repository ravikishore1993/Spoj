#include<stdio.h>
main()
{int n,a,d,j,k;
scanf("%d",&j);
while(j!=0)
{scanf("%d %d %d",&n,&a,&d);
printf("%d \n",(n*((2*a)+((n-1)*d)))/2);      
 j--;    }
}
