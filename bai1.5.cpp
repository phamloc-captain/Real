#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    string ketqua = (b == 0) ? " Khong the chia cho 0" :
                   (a % b == 0) ? " chia het" : " khong chia het";
    
    cout << a << ketqua << " cho " << b << endl;
    return 0;
}