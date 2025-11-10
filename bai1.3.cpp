#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    double ket_qua = pow(x*x*x + x*x - 2*x + 1, n);
    cout << "Ket qua: " << ket_qua << endl;
    return 0;
}