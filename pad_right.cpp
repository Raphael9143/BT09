#include <iostream>
using namespace std;

int strlen(const char* a);
char* strcopy(const char* a);
char* pad_right(const char* a, int n);
void output(char* str, int len);

int main()
{
    const char* a = "Hello";
    int len = strlen(a);
    int n;
    cin >> n;
    char* result = pad_right(a, n);
    output(result, n);
    return 0;
}

char* pad_right(const char* a, int n)
{
    int len = strlen(a);
    char* result = new char[n];
    for (int i=0; i<len; i++)
    {
        result[i] = a[i];
    }
    if (len < n)
    {
        for (int i=len; i<n; i++)
        {
            result[i] = ' ';
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
