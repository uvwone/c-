#include <stdio.h> // Àç±Í

using namespace std;

int a(int k)
{
	if (k <= 1) return 1;
	return a(k - 2) + a(k - 1);
}

int main()
{
	int n, a1 = 0, a2 = 1;
	scanf("%d", &n);
	printf("%d %d ", a1, a2);
	for (int i = 1; i <= n; i++) {
		printf("%d ", a(i));
	}
	return 0;
}
