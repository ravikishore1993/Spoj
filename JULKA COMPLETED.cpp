#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int w=0;
main()
{while(1){
      int length1,length2,borrow=0;
           int int1,int2,intSub;
      char subString1[100000],subString2[100000],subString3[100000];
      gets(subString1);
      gets(subString2);
      length1=strlen(subString1);
      length2=strlen(subString2);
        
        
        if(length1>length2)
                         {
                         for(int i=1;i<=length2;i++)
                         subString2[length1-i]=subString2[length2-i];
                         for(int i=0;i<length1-length2;i++)
                         subString2[i]=48;
                         }             
      if(length2>length1)
                         {
                         for(int i=1;i<=length1;i++)
                         subString1[length2-i]=subString1[length1-i];
                         for(int i=0;i<length2-length1;i++)
                         subString1[i]=48;
                         }
 



      
      for(int i=(max(length1,length2)-1);i>=0;i--)
      {
              int1=subString1[i]-'0'-borrow;
              int2=subString2[i]-'0';
              borrow=0;
              if(int1>=int2)
              {intSub=int1-int2;
               subString3[i]=intSub+'0';}
              else
              {
                 int1=10+int1;
                 borrow=1; 
                 intSub=int1-int2;
                 subString3[i]=intSub+'0';             
              } 
              
              
      }
 /* int count=0; 
   for(int i=0;i<max(length1,length2);i++)
   {if(subString3[i]!='0')
    count++;
    if(count!=0)
    printf("%c",subString3[i]);
    
     }
     cout<<endl;
   
   subString3[max(length1,length2)]=0;
     cout<<strlen(subString3)<<endl;*/
      
      
      
      
      
      
      
      
      
      
      ///////////////////////////////////////////////////////////////
      char a1[100000],a2[100000],a3[100000],a4[100000],a5[100000],a6[100000];
      int sumint,carry=0;
      int l;
      strcpy(a1,subString3);
      l=strlen(subString3);
      strcpy(a2,a1);
      strcpy(a3,a1);
      strcpy(a4,a1);
      strcpy(a5,a1);
      for(int i=1;i<=l;i++)
      {
              int1=int(a1[l-i])+int(a2[l-i])+int(a3[l-i])+int(a4[l-i])+int(a5[l-i])-5*48+carry;
              carry=0;
              if(int1>=10)
              {carry=int1/10;
              int1=int1%10;}
              a6[l-i+1]=int1+'0';
              }
              int j=0;
      a6[0]=carry+'0';
      for(int i=0;i<l;i++)
      {if(a6[i]!=48)
      j++;
      if(j!=0)
      printf("%c",a6[i]);
      
      
      }
      a6[l]=0;
      cout<<endl;
      
      //system("pause");
      carry=0;
////////////////////////////////////////////////////////////////////////////////

char String1[100000],String2[100000],sumString[100000];
      int sum,counter,i;
      strcpy(String1,a6);
      strcpy(String2,subString2);      
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
                         sumString[max(length1,length2)-i+1]=sum;                         
                                
                          }
      if(carry)
      sumString[0]=1;
      else
      sumString[0]=0;
      int count=0;
      for(i=0;i<=max(length1,length2);i++)
      {if(sumString[i]!=0)
      count++;
      if(count!=0)
      printf("%d",sumString[i]);}
      cout<<endl;
 
  //so that i can use this whole thing as a copy paste where ever i need.

      carry=0;
}  // w++;   
//if(w>=10)
//break;
}
