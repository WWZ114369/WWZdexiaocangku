#include<stdio.h>
double abs(double a,double b);
double my_sqrt(double a);
int main(void)
{
	int n;
	double a,b,c;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);
		if(c>abs(a,b) && a>abs(b,c) && b>abs(a,c))
		{
			double p=(a+b+c)/2;
			double s=p*(p-a)*(p-b)*(p-c);
			if(s<=1e-12) printf("-1\n");
			else printf("%.2f\n",my_sqrt(s));
		}
		else printf("-1\n"); 
	}
	return 0;
}
double abs(double a,double b)
{
	if(a>b) return a-b;
	else return b-a;
}
double my_sqrt(double a) {
    if (a < 0.0) return -1.0;  
    if (a == 0.0) return 0.0;

    double x = a > 1.0 ? a : 1.0;  
    double eps = 1e-15;           

    while (1) {
        double next = (x + a / x) * 0.5;
        if (next - x < eps && x - next < eps)  
            break;
        x = next;
    }
    return x;
}
