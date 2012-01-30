#include<stdio.h>
int fact(int);
main()
{long int for2,for3,k,a,b,x;
scanf("%ld",&a);
while(a!=0){k=0;
for(int y=0;y<10;y++){
        scanf("%ld",&x);
        if(x==0)
        k++;}
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
