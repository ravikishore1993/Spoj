#include<stdio.h>
void sort(int[],int);
void swap(int&,int&);
main()
{int sum=0,a,b,c,d[1000],e,q=1000;
scanf("%d %d %d",&a,&b,&c);
e=b*c;
for(int i=0;i<a;i++)
scanf("%d",&d[i]);
sort(d,q);
for(int i=a;i>0;i--)
{sum=sum+d[i];
if(sum>=e)
{printf("%d",a-i+1);
break;}}
      
      }
      
      
      
      
      
      
      
void sort(int a[],int n)
{ 
for (int i=1; i<n; i++)
for (int j=0; j<n-i; j++)
if (a[j] > a[j+1]) swap(a[j],a[j+1]);
}




void swap(int& x,int& y)
{ 
int temp = x;
x = y;
y = temp;
}
