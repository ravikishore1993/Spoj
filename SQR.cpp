#include<iostream>
#include<cmath>
using namespace std;
main()
{int c;
cin>>c;
      while(c){c--;
  long long int c,a,i,b,count=0,flag=1;
  
  cin>>a;
  if((a-3)%4==0)
  cout<<"No"<<endl;
  else
  {for(i=0;(4*i+3)<=a/2 || (4*i+3)==a ;i++)
  { int x=4*i+3;
                        if(a%x==0)
    {if(a%((x)*(x))==0);
     else {  flag=0 ; break;}
     
    }
    }
if(flag)cout<<"Yes"<<endl;
else cout<<"No"<<endl; }
            }
}            
