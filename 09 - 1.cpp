#include <stdio.h> // for

using namespace std;

int main()
{
    int k, n, a1 = 0, a2 = 1;
	scanf("%d", &n);
	printf("%d %d ", a1, a2);

	for (int i = 2; i <= n; i++) {
		k = a1 + a2;// a1 a2 k
		a1 = a2;
		a2 = k;
		printf("%d ", k);
	}
    return 0;
}
