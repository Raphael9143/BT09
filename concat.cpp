#include <iostream>
using namespace std;

char* concat(const char* str1, const char* str2);
int length(const char* str);

int main()
{

    const char* str1 = "Hello";
    const char* str2 = "World";

    int len1 = length(str1);
    int len2 = length(str2);
    int len = len1 + len2;

    char* res = concat(str1, str2);
    for (int i=0; i<len; i++)
    {
        cout << res[i];
    }
    return 0;
}

char* concat(const char* str1, const char* str2)
{
    int len1 = length(str1);
    int len2 = length(str2);
    int len = len1 + len2;

    char* res = new char[len];

    for (int i=0; i<len1; i++)
    {
        res[i] = str1[i];
    }

    for (int i=len1; i<len; i++)
    {
        res[i] = str2[i-len1];
    }

    return res;
}

int length(const char* str)
{
    int len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}
