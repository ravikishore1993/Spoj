/*first i need to take my input . then remainder when divided by 10 is taken and multiplied continuously by 10 and next remainder is added like that*/
#include<stdio.h>
#include<conio.h>
int main()
{long int a,b,c=0,d,e,g,h=0,i,j,k=0;
/*printf("How many times ?\t");
scanf("%ld",d);*/
printf("\n enter the numbers\t");
scanf("%ld %ld",&a,&e);
while(a!=0)
{b=a%10;
a=a/10;
c=c*10+b;}
while(e!=0)
{g=e%10;
e=e/10;
h=h*10+g;}
i=h+c;
while(i!=0)
{j=i%10;
i=i/10;
k=k*10+j ;}
printf("\n sum %ld",k);
getch();
    }
