#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n; cin >> n; int k = n-1;
    for(int y = 0; y <= 2*k; y++)
    {
        for(int x = 0; x <= 2*k; x++)
        {
            if(x - k >= -y && x - k <= y && x >= y-k && x - 3*k <= -y) printf("*");
            else printf(" ");
        }

        cout << endl;
    }
}
