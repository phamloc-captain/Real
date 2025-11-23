#include <iostream>
#include <cmath>

using namespace std;
int timUCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

double timBCNN(int m, int n) {
    if (m == 0 || n == 0) {
        return 0;
    }
    long long ucln = timUCLN(m, n);
    return (double)abs(m) * abs(n) / ucln;
}

int main() {
    int m, n;
    cout << "Nhap so nguyen m: ";
    cin >> m;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    long long bcnn = timBCNN(m, n);
    cout << "------------------------------------------" << endl;
    cout << "Uoc so chung lon nhat (UCLN) cua " << m << " va " << n << " la: " << timUCLN(m, n) << endl;
    cout << "Boi so chung nho nhat (BCNN) cua " << m << " va " << n << " la: " << bcnn << endl;
    return 0;
}