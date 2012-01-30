#include<stdio.h>
long long int f(long long int);
main()
{long long int a,b;
 while(1)
              {
              scanf("%lld",&a);
              b=a/2+a/3+a/4;
              if (b>a)
              printf("%lld\n",f(a));
              else
              printf("%lld\n",a);

              }
}

long long int f(long long int t)
{

     if(t==0)
     return 0;
     long long int e=f(t/2)+f(t/3)+f(t/4);
     if(t>e)
     return t;
     else return e;
}               
                
