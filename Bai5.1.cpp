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
    int *freq = new int[n];
    for (int i = 0; i < n; i++) freq[i] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(a + i) == *(a + j)) {
                freq[i]++;
            }
        }
    }
    int maxFreq = 1;
    for (int i = 0; i < n; i++) {
        if (freq[i] > maxFreq)
            maxFreq = freq[i];
    }
    if (maxFreq == 1) {
        cout << "Khong co phan tu nao xuat hien nhieu nhat.";
    } else {
        cout << "Cac phan tu xuat hien nhieu nhat (" << maxFreq << " lan): ";
        for (int i = 0; i < n; i++) {
            if (freq[i] == maxFreq) {
                cout << *(a + i) << " ";
            }
        }
    }
    delete[] a;
    delete[] freq;
    return 0;
}
