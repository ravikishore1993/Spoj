#include<stdio.h>
#include<iostream>
#include<math.h>
#include<map>
using namespace std;
map<int,int> a;
const int MAX = 510000;
main()
{
      for(int i=3;i<sqrt(MAX+1);i+=2)
      {
        if(a[i/2]==0)
        {
            for(j=i*i;j<MAX+1;j+=2*i)
            {
                a[j/2]=1;
            }
        }
      }
      for(int j=1;j<510000;j++)
      {     
            if(a[j]==0){
                  printf("%d\n",j);
            }
      }
}

