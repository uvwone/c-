#include <stdio.h>
#include <algorithm>
//selection sort
using namespace std;

void select_sort2(int* p, int n)
{
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++)
        {
            if(p[i]>p[j]) swap(p[i],p[j]);
        }
    }
}

int main()
{
    int n=8,a[100] = {5, 4, 2, 6, 5, 23, 63, 1};
    select_sort2(a,n);

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}


