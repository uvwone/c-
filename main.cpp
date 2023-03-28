#include <stdio.h>
#include <algorithm>
//bubble sort
using namespace std;

void bubble_sort(int* p, int n)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-(i+1); j++)
        {
            if(p[j]>p[j+1]) swap(p[j],p[j+1]);
        }
    }
}

int main()
{
    int n=8,a[100] = {5, 4, 2, 6, 5, 23, 63, 1};
    bubble_sort(a,n);

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}


