#include<stdio.h>
int fact(int);
main()
{int for2,for3,k,a,b;
bool x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
scanf("%d",&a);
while(a!=0){
scanf("%d %d %d %d %d %d %d %d %d %d",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10);
k=0;
if(x1==0)
k++;
if(x2==0)
k++;
if(x3==0)
k++;
if(x4==0)
k++;
if(x5==0)
k++;
if(x6==0)
k++;
if(x7==0)
k++;
if(x8==0)
k++;
if(x9==0)
k++;
if(x10==0)
k++;
if(k<3)
printf("1\n");
else
{for2=fact(k)/(2*fact(k-2));
for3=fact(k)/(6*fact(k-3));
    b=165-for2-for3;            
if(b%2==0)
printf("0\n");
else
printf("1\n"); }           
            a--;}
      
      }
      
int fact(int p)
{int f=1;
for(int i=1;i<=p;i++)
f=f*i;
return f;}      
