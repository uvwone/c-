#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int** p;
    p = new int*[10];
    for (int i = 0; i < 10; i++){
        p[i] = new int[10];
    }





    for (int i = 0; i < 10; i++){
        delete p[i];
    }

    delete p;
    return 0;
}
