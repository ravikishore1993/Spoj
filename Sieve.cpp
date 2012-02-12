#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
main()
{
      int a[510000]={0};
      for(int t=1;t<510000;t=t+2)
      a[t]=1;
      for(int i=3;i<=sqrt(510000);i=i+2)
      {
              for(int j=3;i*j<=510000;j=j+2)
              {a[i*j]=0;
                      }
              }
      for(int j=1;j<510000;j++)
      { if(a[j]==1)
       printf("%d\n",j);}
      // system("pause");


      }

