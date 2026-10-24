#include <stdio.h>
long long calc_tax100(long long income)
{
    long long x = income - 60000;
    if (x <= 0) return 0;
    const long long upper[] = {36000, 144000, 300000, 420000, 660000, 960000};
    const int rate[]= {3,10,20,25,30,35,45};
    const long long ded[]= {0,2520,16920,31920,52920,85920,181920};
    for (int i = 0; i < 6; i++)
    {
        if (x <= upper[i])
            return x * rate[i] - ded[i] * 100LL;
    }
    return x * 45LL - 181920LL * 100LL;
}
int main()
{
    long long T;
    scanf("%lld", &T);
    long long target = (T + 1) * 100LL;
    long long lo = 0;
    long long hi = 30000000000LL;
    while (lo < hi)
    {
        long long mid = lo + (hi - lo) / 2;
        if (calc_tax100(mid) >= target)
            hi = mid;
        else
            lo = mid + 1;
    }
    long long ans = lo - 1;
    if (ans < 0) ans = 0;
    printf("%lld\n", ans);
    return 0;
}
