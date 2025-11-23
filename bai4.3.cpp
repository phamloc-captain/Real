#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    int ucln = 1;
    int minValue = (m < n) ? m : n;
    for (int i = 1; i <= minValue; i++) {
        if (m % i == 0 && n % i == 0) {
            ucln = i;
        }
    }
    cout << "Uoc so chung lon nhat (UCLN) la: " << ucln;
    return 0;
}
