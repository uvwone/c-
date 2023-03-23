#include <stdio.h>

using namespace std;

int sum1(int k)
{
    int a = 0;
    for (int i = 1; i <= k; i++) {
        a += i;
    }
    return a;
}

int sum(int k)
{
    if (k == 1) return 1;
    return sum(k-1) + k;
}

int main()
{
    int n, a = 0;
    scanf("%d", &n);
    printf("%d", sum1(n));
    return 0;
}
