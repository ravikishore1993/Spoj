#include<iostream>
#include<cmath>
using namespace std;
main()
{int c;
cin>>c;
      while(c){c--;
  long long int c,a,i,b,count=0,flag=1;
  
  cin>>a;
  ravi:
  if(flag)
  {for(i=0;(4*i+3)<=a/2 || (4*i+3)==a;i++)
  {
                         if(a%(4*i+3)==0)
                         { count=1;
                          b=a/(4*i+3);
                          while(b!=0)
                          { if(b%(4*i+3)==0)
                               {
                               count++;
                               }
                               else break; 
                               b=b/(4*i+3);
                               
                          }
                                             
      
      
      
                         }
  if(count%2!=0)
  {cout<<"No"<<endl; /*system("pause");*/ flag=0; goto ravi;}
  }
cout<<"Yes"<<endl;}
//system("pause");


}}
