#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;
class Stringcmp
{
public:
	Stringcmp(string s1, string s2) : str1(s1), str2(s2) {}
	void result()
	{
		int pos;
		pos = str2.find(str1);
		while (pos < str2.size())
		{
			cout << pos << " ";
			pos = str2.find(str1, pos + 1);
		}
	}

private:
	string str1, str2;
};
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	Stringcmp cmp(str1, str2);
	cmp.result();
	return 0;
}
