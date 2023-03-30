#include <iostream>
using namespace std;

int strlen(const char* a);
char* strcopy(const char* a);
char* truncate(const char*a, int n);

int main()
{
    int n;
    cin >> n;
    const char* str = "The Sun is Shining.";
    char* result = truncate(str, n);
    cout << result;
    return 0;
}

char* truncate(const char* a, int n)
{
    int len = strlen(a);
    int newLen = len - n;
    char* result;
    if (len >= n)
    {
        result = new char[newLen];
        for (int i=0; i<n; i++)
        {
            result[i] = a[i];
        }
    }
    else return nullptr;
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


