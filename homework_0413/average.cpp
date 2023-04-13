#include <iostream>
#include <iomanip>
using namespace std;
class Average
{
public:
	Average(int b[6])
	{
		for (int i = 0; i < 6; i++)
		{
			c[i] = b[i];
		}
	}
	void result()
	{
		double tem = 0.0, sum = 0.0;
		for (int i = 0; i < 6; i++)
		{
			sum += c[i];
		}
		tem = sum / 6.0;
		cout << fixed << setprecision(2) << tem << " ";
		sum = 0.0;
		for (int i = 0; i < 6; i++)
		{
			sum += (c[i] - tem) * (c[i] - tem);
		}
		cout << fixed << setprecision(2) << sum / 6.0 << " ";
		cout << endl;
	}

private:
	int c[6];
};
int main()
{
	int n, a[6];
	cin >> n;
	while (n--)
	{
		for (int i = 0; i < 6; i++)
		{
			cin >> a[i];
		}
		Average average(a);
		average.result();
	}
}
