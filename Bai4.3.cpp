#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct HocSinh {
    string hoTen;
    float diemTB;
    int thuHang;
};
int main() {
    int n;
    cout << "Nhap so luong hoc sinh: ";
    cin >> n;
    cin.ignore();
    HocSinh ds[100];
    for (int i = 0; i < n; i++) {
        cout << "\n--- Hoc sinh " << i + 1 << " ---\n";
        cout << "Ho ten: ";
        getline(cin, ds[i].hoTen);
        cout << "Diem trung binh: ";
        cin >> ds[i].diemTB;
        cin.ignore();
    }
    sort(ds, ds + n, [](HocSinh a, HocSinh b){
        return a.diemTB > b.diemTB; 
    });
    for (int i = 0; i < n; i++) {
        ds[i].thuHang = i + 1;
    }
    cout << "\n     DANH SACH HOC SINH \n";
    for (int i = 0; i < n; i++) {
        cout << "\nHoc sinh " << i + 1 << ":\n";
        cout << "Ho ten: " << ds[i].hoTen << endl;
        cout << "Diem TB: " << ds[i].diemTB << endl;
        cout << "Thu hang: " << ds[i].thuHang << endl;
    }
    return 0;
}
