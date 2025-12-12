#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Khach {
    string ten;
    int soNgay;
    int loaiPhong;
    int thanhTien;
};
int giaPhong(int loai) {
    if (loai == 1) return 300000;
    if (loai == 2) return 200000;
    return 100000; // loại 3
}
int main() {
    int n;
    cout << "Nhap so khach: ";
    cin >> n;
    Khach ds[100];
    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "\nNhap ten khach: ";
        getline(cin, ds[i].ten);
        cout << "Nhap so ngay thue: ";
        cin >> ds[i].soNgay;
        cout << "Loai phong (1-3): ";
        cin >> ds[i].loaiPhong;
        int donGia = giaPhong(ds[i].loaiPhong);
        int tien = ds[i].soNgay * donGia;
        if (ds[i].soNgay >= 6) tien *= 0.9;
        ds[i].thanhTien = tien;
    }
    cout << "\n    DANH SACH KHACH THUE \n";
    for (int i = 0; i < n; i++) {
        cout << ds[i].ten 
             << " | Ngay: " << ds[i].soNgay 
             << " | Phong: " << ds[i].loaiPhong
             << " | Tien: " << ds[i].thanhTien << endl;
    }
    ofstream file("khach_thue.txt");
    file << "DANH SACH KHACH THUE\n";
    for (int i = 0; i < n; i++) {
        file << ds[i].ten << " - "
             << ds[i].soNgay << " ngay - Loai "
             << ds[i].loaiPhong << " - Tien: " 
             << ds[i].thanhTien << "\n";
    }
    file.close();
    cout << "\nDa luu file khach_thue.txt\n";
    return 0;
}
