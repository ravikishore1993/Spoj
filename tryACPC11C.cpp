#include<stdio.h>
#include<algorithm>                        //Used a STL . must recheck why i had used this header.
main()
{
	long long int sum,q,a,j;
	scanf("%lld",&q);
	while(q!=0)
	{
		scanf("%lld",&a);
		long long int l[a];
		for(j=0;j<a;j++)
		scanf("%lld",&l[j]);
		if(l[0]>l[a-1])
		{ 	
			sum=0;
               		for(j=1;j<a;j++)
			sum=sum+l[j];
		}
			else
		{
			sum=0;
   			for(j=0;j<a-1;j++)
			sum=sum+l[j];
		}
		printf("%lld\n",sum);
		q--;
	}
}
