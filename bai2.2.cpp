#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "NHAP 3 CANH TAM GIAC:" << endl;
    cout << "Canh a = "; cin >> a;
    cout << "Canh b = "; cin >> b;
    cout << "Canh c = "; cin >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Day la tam giac ";
        if (a == b && b == c) {
            cout << "deu";
        } else if (a == b || a == c || b == c) {
            if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
                cout << "vuong can";
            } else {
                cout << "can";
            }
        } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            cout << "vuong";
        } else {
            cout << "thuong";
        }
    } else {
        cout << "Khong phai tam giac";
    }
    return 0;
}