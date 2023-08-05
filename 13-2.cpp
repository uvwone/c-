#include <iostream>
#include <string.h>

using namespace std;

void Replace(char* str, char* p, char* q)
{
    int plen = strlen(p);
    int qlen = strlen(q);

    char* x;
    if((x=strstr(str,p)) != NULL) {
        memmove(x+qlen, x+plen, strlen(x+plen)+1);
        memcpy(x,q,qlen);
    }
}

int main()
{
    char aaa[1000] = "I like apple, and you?";
    cout << aaa << endl;
    Replace(aaa,"apple","bananafrefre");
    cout << aaa << endl;

    //printf("%u","abcd"[0]);

    return 0;
}
