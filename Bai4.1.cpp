#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string maSV;
    string hoTen;
    string diaChi;
    float toan, ly, hoa;
};
float tinhDiemTB(SinhVien sv) {
    return (sv.toan + sv.ly + sv.hoa) / 3;
}
int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();
    SinhVien ds[100];
    for (int i = 0; i < n; i++) {
        cout << "\n--- Nhap sinh vien thu " << i + 1 << " \n";
        cout << "Ma sinh vien: ";
        getline(cin, ds[i].maSV);
        cout << "Ho ten: ";
        getline(cin, ds[i].hoTen);
        cout << "Dia chi: ";
        getline(cin, ds[i].diaChi);
        cout << "Diem Toan: ";
        cin >> ds[i].toan;
        cout << "Diem Ly: ";
        cin >> ds[i].ly;
        cout << "Diem Hoa: ";
        cin >> ds[i].hoa;
        cin.ignore();
    }
    cout << "\n    DANH SACH SINH VIEN \n";
    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien " << i + 1 << ":\n";
        cout << "Ma SV: " << ds[i].maSV << endl;
        cout << "Ho ten: " << ds[i].hoTen << endl;
        cout << "Dia chi: " << ds[i].diaChi << endl;
        cout << "Diem TB: " << tinhDiemTB(ds[i]) << endl;
    }
    return 0;
}
