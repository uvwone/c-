#include <stdio.h>

using namespace std;

int gcd1(int a, int b)
{
    for (int t; b!=0;)
    {
        t = a;
        a=b;
        b=t%b;
    }

    return a;
}

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a%b);
}


int main()
{
    int a = 0, x, y;
    scanf("%d %d", &x, &y);
    printf("%d", gcd(x,y));
    return 0;
}
