#include <iostream>
using namespace std;
class Binary
{
public:
    Binary(string s) : str(s) {}
    void result()
    {
        for (int i = str.size() - 1; i >= 0; i--)
        {
            cout << str[i];
        }
    }

private:
    string str;
};
int main()
{
    string str;
    cin >> str;
    Binary bi(str);
    bi.result();
    return 0;
}