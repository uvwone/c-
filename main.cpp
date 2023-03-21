#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, com;
    printf("가위(1) 바위(2) 보(3) : ");
    scanf("%d", &a);
    com = (rand() % 3) + 1;

    switch(a-com)
    {
    case 0:
        printf("비김"); break;
    case 1: case -2:
        printf("사람 승");  break;
    case 2: case -1:
        printf("컴퓨터 승"); break;
    }

    return 0;
}
