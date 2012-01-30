#include<stdio.h>
#include<iostream.h>
using namespace std;
main()
{
      char b,d,q,p,r=2,s=3;
      printf("Ready\n");
      while(1<2)
      {
       r=getchar();
       s=getchar();
       if(r==32&&s==32)
       break;
       if(r=='b' && s=='d')
       printf("Mirrored pair\n");
       else if(r=='d' && s=='b') 
       printf("Mirrored pair\n");
       else if(r=='p' && s=='q')
       printf("Mirrored pair\n");
       else if(r=='q' && s=='p')
       printf("Mirrored pair\n");
       else if(r!=32 && s!=32)
       printf("Ordinary pair\n");
       }
system("pause");
}
