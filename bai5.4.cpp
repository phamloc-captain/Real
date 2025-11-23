#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int tongSoChinhPhuong = 0;
    cout << "--- CHUONG TRINH TINH TONG SO CHINH PHUONG DON GIAN ---" << endl;
    cout << "Nhap cac so nguyen duong (Nhap 0 hoac so am de ket thuc)." << endl;
    cout << "--------------------------------------------------------" << endl;
    while (true) {
        cout << "Nhap n: ";
        cin >> n;
        if (n <= 0) {
            cout << "\nChuong trinh ket thuc." << endl;
            break;
        }
        int Soduocnhap = (int)sqrt(n); 
        if (Soduocnhap * Soduocnhap == n) {
            cout << "   -> " << n << " la so chinh phuong." << endl;
            tongSoChinhPhuong += n;
        }
    }
    cout << "========================================================" << endl;
    cout << "TONG CUA CAC SO CHINH PHUONG DA NHAP LA: " << tongSoChinhPhuong << endl;
    return 0;
}