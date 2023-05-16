#include <iostream>
using namespace std;
class Pow
{
public:
	Pow(int a, int b) : x(a), n(b) {}
	int result()
	{
		int result = 1;
		for (int i = 1; i <= n; i++)
		{
			result *= x;
		}
		return result;
	}

private:
	int x, n;
};
int main()
{
	int x, n;
	cin >> x >> n;
	Pow p(x, n);
	cout << p.result();
	return 0;
}