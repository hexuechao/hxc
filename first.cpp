#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "������һ����λ����";
    cin >> num;
    sum += num % 10; // ȡ��λ��
    num /= 10;
    sum += num % 10; // ȡʮλ��
    num /= 10;
    sum += num; // ȡ��λ��
    cout << "��λ��֮��Ϊ��" << sum << endl;
    return 0;
}