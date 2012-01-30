#include<stdio.h>
main()
{ int a,b,c,k,x,y;
scanf("%d",&a);
while(a!=0){k=0;
for(y=0;y<10;y++){
        scanf("%d",&x);
        if(x==0)
        k++;}
        if(k==1 || k==3 || k==4 || k==5 || k==7 || k==8 || k==9 || k==0)
        printf("1\n");
        else
        printf("0\n");
        a--;}}
