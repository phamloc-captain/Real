#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Cac cap nghiem nguyen (x, y) la:" << endl;
    for (int x = 0; x <= 50; x++) {
        int T = 100 - 2 * x;
        if (T % 3 == 0) {
            int y = T / 3;
            cout << "x = " << x << ", y = " << y << endl;
        }
    }

    return 0;
}