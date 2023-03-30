#include <stdio.h>


using namespace std;

int atoi(char* p)
{
    int sum=0;
    for(; *p; p++)
    {
        sum = sum*10 + *p - '0';
    }
    return sum;
}

char* itoa(int n)
{
    char* p = new char[30];
    sprintf(p,"%d",n);
    return p;
}


int main()
{
    char n[100] = "12343345"; // { '1', '2', '3' };
//    char n[100] = { '1', '2', '3' };
    int k = atoi(n);
    printf("%d\n", k);

    char* p = itoa(k);
    printf("%s\n", p);

    return 0;
}
