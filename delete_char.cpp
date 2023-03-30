#include <iostream>
using namespace std;

int strlen(const char* a);
char* strcopy(const char* a);
char* delete_char(char* a, char c);

int main()
{
    char* a = new char;
    cin >> a;
    char* result = delete_char(a, 'e');
    cout << result;
    return 0;
}

char* delete_char(char* a, char c)
{
    int current_pos = 0;
    int i = 0;
    char* result = new char;
    while(a[i] != '\0')
    {
        if (a[i] != c)
        {
            result[current_pos] = a[i];
            current_pos++;
        }
        i++;
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

