#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100] = "I like apple, and you?";
    char* apple = "apple";
    char* banana= "banana";

    int applelen = strlen(apple);
    int bananalen = strlen(banana);

    char* p = strstr(a, "apple");
    char* q = p+(bananalen - applelen);
    memmove(q,p,strlen(p)+1);
    memcpy(p,banana,bananalen);

    printf("%s", a);
    return 0;
}
