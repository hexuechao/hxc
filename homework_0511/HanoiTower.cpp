#include <iostream>
using namespace std;

class HanoiTower
{
public:
    HanoiTower(int n) : cnt(0)
    {
        hanoi(n, 'A', 'B', 'C');
    }

    void hanoi(int n, char A, char B, char C)
    {
        if (n == 1)
        {
            cout << "Step" << ++cnt << ": Move Disk1 from " << A << " to " << C << endl;
            return;
        }
        hanoi(n - 1, A, C, B);
        cout << "Step" << ++cnt << ": Move Disk" << n << " from " << A << " to " << C << endl;
        hanoi(n - 1, B, A, C);
    }

private:
    int cnt;
};

int main()
{
    int n;
    cin >> n;
    HanoiTower ht(n);
    return 0;
}
