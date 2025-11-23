#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n < 2) {
        cout << n << " khong phai la so nguyen to";
    } else {
        bool laSoNguyenTo = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                laSoNguyenTo = false;
                break;
            }
        }
        if (laSoNguyenTo) {
            cout << n << " la so nguyen to";
        } else {
            cout << n << " khong phai la so nguyen to";
        }
    }
    return 0;
}