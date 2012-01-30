#include<iostream>
using namespace std;
main()
{long long int a,b;
int c;
cin>>c;
while(c!=0){
cin>>a>>b;
if(a==0 || a==10 || a==20)
cout<<"0\n";
else if(b==0)
cout<<"1\n";
else if(a==1)
cout<<"1\n";
else if(a==2 || a==12)
{if(b%4==1)
cout<<"2\n";
else if(b%4==2)
cout<<"4\n";
else if(b%4==3)
cout<<"8\n";
else if(b%4==0)
cout<<"6\n";}
else if(a==3 || a==13)
{if(b%4==1)
cout<<"3\n";
else if(b%4==2)
cout<<"9\n";
else if(b%4==3)
cout<<"7\n";
else if(b%4==0)
cout<<"1\n";}   
else if(a==4 || a==14)
{if(b%2==0)
if(b%4==1)
cout<<"6\n";
else
cout<<"4\n";}  
else if(a==5 || a==15)
cout<<"5\n";
else if(a==6 || a== 16)
cout<<"6\n";
else if(a==7 || a==17)
{if(b%4==1)
cout<<"7\n";
else if(b%4==2)
cout<<"9\n";
else if(b%4==3)
cout<<"3\n";
else if(b%4==0)
cout<<"1\n";}
else if(a==8 || a==18)
{if(b%4==1)
cout<<"8\n";
else if(b%4==2)
cout<<"4\n";
else if(b%4==3)
cout<<"2\n";
else if(b%4==0)
cout<<"6\n";}
else if(a==9 || a==19)
{if(b%2==0)
if(b%4==1)
cout<<"1\n";
else
cout<<"9\n";}
c--;}}
