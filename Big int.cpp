#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int length1,length2,carry=0;
main()
{
      while(1){
 char String1[100000],String2[100000],sumString[100000];
 int sum,carry,counter,i;
 gets(String1);
 gets(String2);      
 length1=strlen(String1);
 length2=strlen(String2);
 if(length1>length2)
      {
                    for(i=1;i<=length2;i++)
                    String2[length1-i]=String2[length2-i];
                    for(i=0;i<length1-length2;i++)
                    String2[i]=48;
     
     
               }             
 if(length2>length1)
       {
                    for(i=1;i<=length1;i++)
                    String1[length2-i]=String1[length1-i];
                    for(i=0;i<length2-length1;i++)
                    String1[i]=48;
                    
 }
 
 for(i=1;i<=max(length1,length2);i++)
  {
    
       sum=int(String1[max(length1,length2)-i])+int(String2[max(length1,length2)-i])-96+carry;
       carry=0;
       if(sum>=10)
       {
        carry=1;
        sum=sum%10;          
       }                         
       sumString[max(length1,length2)-i]=sum;                         
                                
  }
  if(carry)
  cout<<carry;
 for(i=0;i<max(length1,length2);i++)
 printf("%d",sumString[i]);
 cout<<endl;
 //system("pause");
carry=0;
}
 
}

  
