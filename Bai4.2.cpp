#include <iostream>
#include <string>
using namespace std;

struct NhanVien {
    string maNV;
    string hoTen;
    string diaChi;
    bool quanLy;
};
int main() {
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cin.ignore();
    NhanVien ds[100];
    for (int i = 0; i < n; i++) {
        cout << "\n--- Nhan vien " << i + 1 << " ---\n";
        cout << "Ma nhan vien: ";
        getline(cin, ds[i].maNV);
        cout << "Ho ten: ";
        getline(cin, ds[i].hoTen);
        cout << "Dia chi: ";
        getline(cin, ds[i].diaChi);
        cout << "Quan ly (1=QL, 0=NV): ";
        cin >> ds[i].quanLy;
        cin.ignore();
    }
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (ds[i].quanLy == 1) { 
            ds[m++] = ds[i];
        }
    }
    cout << "\n      DANH SACH NHAN VIEN (CHI QUAN LY) \n";
    for (int i = 0; i < m; i++) {
        cout << "\nNhan vien " << i + 1 << ":\n";
        cout << "Ma NV: " << ds[i].maNV << endl;
        cout << "Ho ten: " << ds[i].hoTen << endl;
        cout << "Dia chi: " << ds[i].diaChi << endl;
        cout << "Chuc vu: Quan ly\n";
    }
    return 0;
}
