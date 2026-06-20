#include <iostream>
#include <cstring>
using namespace std;

class Polynomial {
private:
    int arr[101]; 
public:
    Polynomial() {}
        memset(arr, 0, sizeof(arr));
    }

    void set_coefficient(int x, int y) {}
        arr[x] += y;
    }

    Polynomial operator +(Polynomial other) {}
        Polynomial result;
        for (int i = 0; i <= 100; i++) {
            result.arr[i] = arr[i] + other.arr[i];
        }
        return result;
    }

    void print() {}
        bool is_first_term = true;
        for (int i = 100; i >= 0; i--) {
            if (arr[i]) {
                if (arr[i] > 0 && !is_first_term) {
                    cout << "+";
                }
                if (i == 0) {
                    cout << arr[i];
                }
                else if (i == 1) {
                    cout << arr[i] << "x";
                }
                else {
                    cout << arr[i] << "x" << i;
                }
                is_first_term = false;
            }
        }
    }
};

int main() {
    Polynomial a, b, ans;
    int x, y;

    while (cin >> x >> y) {
        a.set_coefficient(x, y);
        if (x == 0)
            break;
    }

    while (cin >> x >> y) {
        b.set_coefficient(x, y);
        if (x == 0)
            break;
    }
    
    ans = a + b;
    ans.print();
    return 0;
}
