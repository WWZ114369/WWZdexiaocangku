#include <stdio.h>
static double abs1(double x);
double sqrt1(double n);
double len(double x1, double y1, double x2, double y2);
double s(double x1, double y1, double x2, double y2,double x3, double y3);
int collinear(double x1, double y1, double x2, double y2, double x3, double y3);
int main()
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    if (!collinear(x1, y1, x2, y2, x3, y3))
    {
        double perimeter = len(x1,y1,x2,y2) + len(x1,y1,x3,y3) + len(x2,y2,x3,y3);
        double area = s(x1, y1, x2, y2, x3, y3);
        printf("%.2f %.2f\n", perimeter, area);
    }
    else
    {
        printf("-1 -1\n");
    }
    return 0;
}
static double abs1(double x)
{
    return x < 0 ? -x : x;
}
double sqrt1(double n)
{
    if (n == 0.0) return 0.0;
    double x = (n >= 1.0) ? n : 1.0;
    const double eps = 1e-15;
    while (abs1(x * x - n) > eps * n)
        x = 0.5 * (x + n / x);
    return x;
}
double len(double x1, double y1, double x2, double y2)
{
    return sqrt1((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

double s(double x1, double y1, double x2, double y2,double x3, double y3)
{
    return 0.5 * abs1((x2-x1)*(y3-y1) - (x3-x1)*(y2-y1));
}
int collinear(double x1, double y1, double x2, double y2,double x3, double y3)
{
    double cross = (x2-x1)*(y3-y1) - (x3-x1)*(y2-y1);
    return abs1(cross) < 1e-9;
}
