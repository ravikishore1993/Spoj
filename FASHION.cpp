#include<stdio.h>
void sort(int[],int);
void swap(int&,int&);
main()
{int a,b;
scanf("%d",&a);
while(a!=0){
            scanf("%d",&b);
            int boy[b],girl[b],i;
            for(i=0;i<b;i++)
            scanf("%d",&boy[i]);
            for(i=0;i<b;i++)
            scanf("%d",&girl[i]);
            sort(boy,b);
            sort(girl,b);
            int sum=0;
            for(i=0;i<b;i++)
            sum=sum+(boy[i]*girl[i]);
            printf("%d\n",sum);
            a--;}  
      }
void sort(int a[],int n)
{
for (int i=1; i<n; i++)
for (int j=0; j<n-i; j++)
if (a[j] > a[j+1]) swap(a[j],a[j+1]);}

void swap(int& x,int& y)
{ 
int temp = x;
x = y;
y = temp;
}
