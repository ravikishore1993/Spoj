#include<stdio.h>
#include<algorithm>
typedef long long ll;
using namespace std;
main()
{long long int q,a,j;
scanf("%lld",&q);
while(q!=0){
scanf("%lld",&a);
long long int l[a];
for(j=0;j<a;j++)
scanf("%lld",&l[j]);
sort(l,l+a);
long long int sum=0;
for(j=0;j<=a-2;j++)
sum=sum+l[j];
printf("%lld\n",sum);
q--;}
      }
