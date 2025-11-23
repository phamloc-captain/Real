#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cout << "Nhap so nguyen m: ";
    cin >> m;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    int bcnn = max(m, n); 
    while (true) {
        if (bcnn % m == 0 && bcnn % n == 0) {
            cout << "Boi so chung nho nhat cua " << m << " va " << n << " la: " << bcnn << endl;
            break;
        }
        bcnn++;
    }
    return 0;
}