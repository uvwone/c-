#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, com;
    printf("����(1) ����(2) ��(3) : ");
    scanf("%d", &a);
    com = (rand() % 3) + 1;

    switch(a-com)
    {
    case 0:
        printf("���"); break;
    case 1: case -2:
        printf("��� ��");  break;
    case 2: case -1:
        printf("��ǻ�� ��"); break;
    }

    return 0;
}
