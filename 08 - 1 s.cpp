#include <stdio.h>
#include <algorithm>
//selection sort
using namespace std;

void select_sort1(int* p, int n)
{
    for (int i = 0; i < n; i++){
        int* q = min_element(p+i,p+n);
        swap(p[i],*q);
    }
}

int main()
{
    int n=8,a[100] = {5, 4, 2, 6, 5, 23, 63, 1};
    select_sort1(a,n);

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}


