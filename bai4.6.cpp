#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << "Ket qua in ra:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << "\t";
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        cout << "\t";
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}