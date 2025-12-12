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
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(a + i) % 2 != 0 && *(a + j) % 2 != 0) {
                if (*(a + i) > *(a + j)) {
                    int temp = *(a + i);
                    *(a + i) = *(a + j);
                    *(a + j) = temp;
                }
            }
            else if (*(a + i) % 2 == 0 && *(a + j) % 2 == 0) {
                if (*(a + i) < *(a + j)) {
                    int temp = *(a + i);
                    *(a + i) = *(a + j);
                    *(a + j) = temp;
                }
            }
        }
    }
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    }
    delete[] a;
    return 0;
}
