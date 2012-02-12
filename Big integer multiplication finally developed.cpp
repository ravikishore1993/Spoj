#include<iostream>
#include<string>
using namespace std;
main()
{while(1){
      char a[100000]={0},b[100000]={0};                      //to use this just write a program to copy the no.s int char strings a,b
      int a1,b1,carry=0;
      gets(a);
      gets(b);
      a1=strlen(a);
      b1=strlen(b);
      int a2[a1],b2[b1],product[a1+b1];
      
          for(int r=0;r<a1+b1;r++)
          product[r]=0;
                
                       for(int i=a1-1; i>=0 ;i--)            ///shifting
                       {
                       a2[a1-1 -i]=int(a[i])-48;
                       }
                       for(int i=b1-1; i>=0 ;i--)
                       {
                       b2[b1-1-i]=int(b[i])-48;
                       }                                      //shift over
                
      
      for(int i=0;i<a1;i++)
      {
         for(int j=0;j<b1;j++)
         { 
         product[i+j]=product[i+j] +a2[i]*b2[j]; 
         }     
      }
    
    for(int k=0;k<a1+b1;k++)
    {
    product[k]=product[k]+carry;
         carry=product[k]/10;
         product[k]=product[k]%10;   
    }
    
   for(int k=a1+b1-1;k>=0;k--)
   cout<<product[k];
   cout<<endl;
   //system("pause");   
   }}
