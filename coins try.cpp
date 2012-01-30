#include<stdio.h>
long int f(long int);
main()
{long int a,b;
 while(1)
              {
              scanf("%ld",&a);
              b=f(a/2)+f(a/3)+f(a/4);
              if (b>a)
              printf("%ld\n",b);
              else
              printf("%ld\n",a);

              }
}

long int f(long int t)
{
     if(t==0)
     return 0;
     long int e=f(t/2)+f(t/3)+f(t/4);
     if(t>e)
     return t;
     else return e;
}               
                
