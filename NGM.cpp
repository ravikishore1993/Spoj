#include<stdio.h>
main()
{long long int a,b,c,d;
      scanf("%lld",&a);
      if((a%8==1 || a%8==2 || a%8==3 || a==0) && a!=3)
      printf("2\n");
      else
      {printf("1\n");
      if(a==3)
      printf("2\n");
      else if(a%8==4)
      printf("3\n");
      else if(a%8==5)
      printf("3\n");
      else if(a%8==6)
      printf("4\n");
      else if(a%8==7)
      printf("4\n");
      else if(a%8==0)
      printf("5\n");
      }
      
      }
