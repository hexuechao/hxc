#include <iostream>
using namespace std;
class Wordlen
{
public:
	Wordlen(string s) : str(s) {}
	void result()
	{
		int cnt = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != ' ' && str[i] != '.')
				cnt++;
			else if (str[i] == ' ' && str[i + 1] != ' ')
			{
				cout << cnt << " ";
				cnt = 0;
			}
			else if (str[i] == '.')
				cout << cnt;
		}
	}

private:
	string str;
};
int main()
{
	string str;
	getline(cin, str);
	Wordlen wordlen(str);
	wordlen.result();
	return 0;
}
