#include <iostream>
using namespace std;

int strlen(const char* a);
char* strcopy(const char* a);
char* reverse(const char* a);

int main()
{
    const char* a = "Hello";
    char* res = reverse(a);
    cout << res;
    return 0;
}

char* reverse(const char* a)
{
    int len = strlen(a);
    char* result = new char[len];
    for (int i=0; i<len; i++)
    {
        result[i] = a[len-1-i];
    }
    return result;
}

int strlen(const char* a)
{
    int len = 0;
    while (a[len] != '\0')
    {
        len++;
    }
    return len;
}

char* strcopy(const char* a)
{
    int len = strlen(a);
    char* result = new char[len];
    for (int i=0; i<len; i++)
    {
        result[i] = a[i];
    }
    return result;
}
