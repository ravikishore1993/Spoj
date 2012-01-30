#include<std1io.h>
main()
{double a=1,b,c,n;
r:
scanf("%lf",&a);
while(a!=0){
            if(a<0.5)
            {printf("1 card(s)\n");
            goto r;
                     }
b=0;
n=0;
while(b<a)
{n++;
          b=b+(1/(n+1));

       }
       printf("%0.lf card(s)\n",n);
      
      goto r;}}
