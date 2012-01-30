#include<stdio.h>
#include<math.h>
int main()
{long int a,b,c,i,j;
scanf("%d",&j);
while(j!=0){
scanf("%ld",&a);
b=0;
for(i=a;i>0;i--)
{if(i%5==0)
{b++;
if((i/5)%5==0)
{c=i/5;
while((c%5==0 && c!=0))
{b++;
c=c/5;}
}}}
printf("%ld\n",b);
j--;}
}
