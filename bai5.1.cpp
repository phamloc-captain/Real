#include <iostream>
#include <cmath>
using namespace std;

bool kiemTraSoHoanHao(int k) {
    if (k < 2) return false;
    int TongUoc = 0;
    for (int i = 1; i <= k / 2; i++) {
        if (k % i == 0) {
            TongUoc += i;
        }
    }
    if (TongUoc == k) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << "Cac so hoan hao nho hon " << n << " la: ";
    for (int i = 1; i < n; i++) {
        if (kiemTraSoHoanHao(i) == true) {
            cout << i << " ";
        }
    }
    return 0;
}