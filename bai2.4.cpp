#include <iostream>
using namespace std;
int main() {
    int n;
    string doc_so[] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    cout << "Nhap so: ";
    cin >> n;
    if (n < 100 || n > 999) {
        cout << "Khong phai so 3 chu so!";
        return 0;
    }
    int tram = n / 100;
    int chuc = (n % 100) / 10;
    int donvi = n % 10;
    cout << doc_so[tram] << " tram ";
    if (chuc == 0 && donvi != 0) cout << "le ";
    if (chuc == 1) cout << "muoi ";
    if (chuc > 1) cout << doc_so[chuc] << " muoi ";
    if (donvi != 0) {
        if (chuc != 0 && donvi == 5) cout << "lam";
        else cout << doc_so[donvi];
    }
    return 0;
}