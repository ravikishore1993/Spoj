#include<cstdio>
#include<vector>
using namespace std;
vector<int> v;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
      v.clear();
      int n;
      long long sum=0;
      int max=-1;
      int index=0;
      scanf("%d",&n);
      v.resize(n);
      for(int i=0;i<n;i++)
      {
         int b;
         scanf("%d",&b);
         if(b>max)
         {
            max=b;
            index=i;
         }
         sum+=b;
      v[i]=b;
       }
       if(n==1)
       {
         printf("%lld\n",sum);
         continue;
      }
       
       int d1,d2;
       d1=d2=0;
       for(int i=0;i<index;i++)
       {
         d1+=v[i];
      }
      for(int i=n-1;i>index;i--)
      {
         d2+=v[i];
      }
      printf("%lld",sum);
      if(d1<d2)
      {
         if((d1*2+v[n-1])<max)
         {
            sum-=max;
         }
         else
         {
            sum-=v[n-1];
         }
      }
      else
      {
            if((d2*2+v[0])<max)
         {
            sum-=max;
         }
         else
         {
            sum-=v[0];
         }
      }
      
      printf("%lld\n",sum);
      
   }
   return 0;
}


       
       
       
       
