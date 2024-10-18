#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m,n;
    cin >> m >> n;

    if (m < 1 || n >= 10000 || m >= n) {
        return 1;
    }

    int sumOdd = 0;
    for (int i = m; i <= n; i++) {
        if (i % 2 != 0) {
            sumOdd += i;
        }
    }
    cout << sumOdd << endl;

    int commonGCD = gcd(m, n);
    cout << m / commonGCD << "/" << n / commonGCD << endl;

    bool kt = false;
    for (int x = 0; x <= m; x++) {
        int y = m - x;
        if (x * y == n && x <= y) {
            cout << x << "; " << y << endl;
            kt = true;
            break;
        }
    }

    if (!kt) {
        cout << "KHONG" << endl;
    }

    return 0;
}

