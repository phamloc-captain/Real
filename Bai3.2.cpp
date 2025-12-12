#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream f("vanBan.txt");
    string vanban((istreambuf_iterator<char>(f)), istreambuf_iterator<char>());
    f.close();
    string s;
    while (true) {
        cout << "Nhap chuoi can tim (nhap 0 de thoat): ";
        getline(cin, s);
        if (s == "0") break;
        if (vanban.find(s) != string::npos) {
            cout << "Co trong van ban!\n";
        } else {
            cout << "Khong co! -> Luu vao vanbanMoi.txt\n";
            ofstream g("vanBanMoi.txt");
            g << s;
            g.close();
        }
    }
    return 0;
}
