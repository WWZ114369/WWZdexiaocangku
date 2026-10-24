#include<stdio.h>
double my_pow(double x,int k);
int main(void)
{
  int n;
  scanf("%d",&n);
  double x;
  scanf("%lf",&x);
  double sum=0;
  for(int i=0;i<n;i++)
    {
      double a;
      int k;
      scanf("%lf %d",&a,&k);
      sum+=a*my_pow(x,k);
    }
  printf("%.2lf",sum);
  return 0;
}
double my_pow(double x,int k)
{
  double sum=1.0;
  while(k>0)
    {
      if(k&1)
      {
        sum*=x;
      }
      k>>=1;
      x*=x;
    }
  return sum;
}


























