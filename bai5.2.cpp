#include <iostream>
#include <cmath>
using namespace std;
bool kiemTraNguyenTo(int k) {
    if (k < 2) return false;
    for (int i = 2; i <= sqrt(k); i++) {
        if (k % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    double tong = 0;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << "Cac so nguyen to tu 2 den " << n << " la: ";
    for (int i = 2; i <= n; i++) {
        if (kiemTraNguyenTo(i) == true) {
            cout << i << " ";
            tong = tong + i;
        }
    }
    cout << endl;
    cout << "Tong cac so nguyen to la: " << tong << endl;
    return 0;
}