#include <iostream>
#include <time.h>

using namespace std;

void Swap(int& x, int& y)
{
    int t = x;
    x = y;
    y = t;
}

void Swap(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
}


int main()
{
//    time_t now = time(0);
//    struct tm* p = localtime(&now);
//    cout << p->tm_year+1900 << endl;
//    cout << p->tm_mon+1 << endl;
//    cout << p->tm_mday << endl;
//    cout << p->tm_hour << endl;
//    cout << p->tm_min << endl;
//    cout << p->tm_sec << endl;
//
//    struct tm q;
//    q.tm_year = 109;
//    q.tm_mon  = 5;
//    q.tm_hour = 8;
//    q.tm_min =  40;
//
//    time_t birth = mktime(&q);
//
//    cout << endl << now-birth <<endl;

    int a=10, b=20;
    Swap(a,b);
    printf("%d %d", a, b);

    return 0;
}
