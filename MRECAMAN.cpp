#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
long long int w[500000],x;
long long int a(long long int);

main()
{//while(1)
         {x=1;
                  w[0]=0;
         long long int p,q,r;
         p=1000000;
         //scanf("%lld",&p);
         if(p==-1)
        // break;
        ;
         printf("%lld\n",a(p));
         }
}
     
     
     
    long long int a(long long int u)
     {
         if(u==0)
         return 0;
         long long int v=a(u-1)-u;
         if(v>0 && v!=*find(w,w+(x-1),v))
         {w[x]=v;
         x++;
                return v;}
         else 
         {v=v+2*u;
         w[x]=v;
         x++;
         return v;}
     
     } 
