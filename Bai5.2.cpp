#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int *a = new int[n];
    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }
    int leMin = 0, chanMax = 0;
    bool coLe = false, coChan = false;
    for (int i = 0; i < n; i++) {
        int x = *(a + i);
        if (x % 2 != 0) {
            if (!coLe || x < leMin) {
                leMin = x;
                coLe = true;
            }
        }
        if (x % 2 == 0) {
            if (!coChan || x > chanMax) {
                chanMax = x;
                coChan = true;
            }
        }
    }
    if (coLe)
        cout << "Phan tu le nho nhat: " << leMin << endl;
    else
        cout << "Khong co phan tu le." << endl;

    if (coChan)
        cout << "Phan tu chan lon nhat: " << chanMax << endl;
    else
        cout << "Khong co phan tu chan." << endl;

    delete[] a;
    return 0;
}
