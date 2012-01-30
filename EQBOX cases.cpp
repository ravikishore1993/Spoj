#include<stdio.h>
main()
{long long int a,b,c,d,e,f,g;
scanf("%lld",&g);
while(g>0)
{
          \\ area cannot be high or equal.
          \\ if lower test if any side has exceeded both the tile sides
          \\there cannot be case for both sides exceeding tile sides
          \\if any side has exceeded both the tile sides then only check for a*a+b*b>c*c+d*d if true it exists else it does not exist
          \\case when one of the side is exceeding one one tile side and touching other tile side and other side is less.
          \\for it check again a*a+b*b>c*c+d*d if true it exists else it does not exist
          \\
