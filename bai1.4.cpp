#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Nhap so nguyen n (0 < n < 10): ";
    cin >> n;
    if (n <= 0 || n >= 10) {
        cout << "So n khong hop le!" << endl;
        return 1;
    }
    cout << "Bang cuu chuong cua " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}