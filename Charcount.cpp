#include<stdio.h>
main()
{char a[2000000];
long long int i,j,k=0,l,m,n=0;
for(i=0;i<1000;i++)



                            {scanf("%c",&a[i]);
if(a[i]==10)
                      break;}




for(j=0;j<i;j++)
       {if(a[j]==32)
  {k++;
if(k>1)
          {for(m=l;m<=j;m++)
     {    {if(a[m]>=33 && a[m]<=64)
         { 
     n++;}}
if(n==j-l-1)
 k--; }
          }
l=j;  
   }
       }
printf("%lld",k+1);

                   
}
      
