#include <iostream>
using namespace std;

int strlen(const char* a);
char* strcopy(const char* a);
char* pad_left(const char* a, int n);
void output(char* str, int len);

int main()
{
    int n;
    cin >> n;
    const char* str = "Hello";
    int len = strlen(str);
    char* result = pad_left(str, n);
    output(result, n);
    return 0;
}

char* pad_left(const char* a, int n)
{
    int len = strlen(a);
    char* result = new char [n];
    if (len < n)
    {
        for (int i=0; i<n-len; i++)
        {
            result[i] = ' ';
        }
        for (int i=n-len; i<n; i++)
        {
            result[i] = a[i-n+len];
        }
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

void output(char* str, int len)
{
    for (int i=0; i<len; i++)
    {
        cout << str[i];
    }
}
