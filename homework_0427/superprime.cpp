#include <bits/stdc++.h>
using namespace std;
class Superprime
{
public:
    void result()
    {
        bool prime[1000];
        int cnt = 0, sum = 0;
        memset(prime, true, sizeof(prime));
        prime[0] = false;
        prime[1] = false;
        for (int i = 2; i * i < 1000; i++)
        {
            if (prime[i])
            {
                for (int j = 2; j < 1000 / i; j++)
                    prime[i * j] = false;
            }
        }
        for (int i = 100; i <= 999; i++)
        {
            int tem = i;
            if (prime[tem])
            {
                int a = tem % 10;
                int b = tem / 10 % 10;
                int c = tem / 100;
                if (prime[a + b + c] && prime[a * b * c] && prime[a * a + b * b + c * c])
                {
                    cnt++;
                    sum += i;
                }
            }
        }
        cout << cnt << " " << sum;
    }
};
int main()
{
    Superprime superprime;
    superprime.result();
    return 0;
}
