#include <iostream>
#include <cstring>
using namespace std;

class Strstr
{
public:
    Strstr() {}

    int myStrstr(char a[], char b[])
    {
        int lena = strlen(a);
        int lenb = strlen(b);
        int i = 0, j = 0;
        while (i < lena && j < lenb)
        {
            if (a[i] == b[j])
            {
                i++;
                j++;
            }
            else
            {
                i = i - j + 1;
                j = 0;
            }
        }
        if (j == lenb)
        {
            return i - j;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    char a[500], b[500];
    cin.getline(a, 500);
    cin.getline(b, 500);
    Strstr str;
    cout << str.myStrstr(a, b);
    return 0;
}
