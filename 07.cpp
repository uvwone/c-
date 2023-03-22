#include <stdio.h>

using namespace std;

int main()
{
    int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			printf("¦\n");
		}

		else printf("%d\n", i);
	}

    return 0;
}
