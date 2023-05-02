#include <bits/stdc++.h>
using namespace std;
class Decimal
{
public:
    Decimal(int m, int n) : a(m), b(n) {}
    void result()
    {
        memset(arr, -1, sizeof(arr));
        for (int i = 0; i <= 200; i++)
        {
            arr[i] = a / b;
            a = (a % b) * 10;
            if (a == 0)
                break;
        }
        cout << arr[0] << ".";
        for (int j = 1; arr[j] != -1 && j <= 200; j++)
        {
            cout << arr[j];
        }
        cout << endl;
    }

private:
    int a, b;
    int arr[201];
};
int main()
{
    int a, b;
    (cin >> a).get();
    cin >> b;
    Decimal decimal(a, b);
    decimal.result();
    return 0;
}
