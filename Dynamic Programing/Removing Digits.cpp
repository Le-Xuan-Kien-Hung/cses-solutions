#include <bits/stdc++.h>
long long n,a,res,sum;
using namespace std;
long long mchs(long long x)
{
    long long ma=0;
    while(x!=0)
    {
        ma=max(ma,x%10);
        x=x/10;
    }
    return ma;
}
int main()
{
    cin >> n;
    while(n>0)
    {
        res++;
        n=n-mchs(n);
    }
    cout << res;
    return 0;
}
