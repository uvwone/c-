#include <stdio.h>

using namespace std;

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	for (int i = x;  x <= y; x++) {
		printf("%d\n", x * x);
	}
	return 0;
}
