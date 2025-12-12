#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    double **a = new double*[n];
    for (int i = 0; i < n; i++) a[i] = new double[n];
    double maxVal; cin >> maxVal; a[0][0] = maxVal;
    for (int i = 0; i < n; i++)
        for (int j = (i == 0 ? 1 : 0); j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] > maxVal) maxVal = a[i][j];
        }
    
    bool sym = true;
    for (int i = 0; i < n && sym; i++)
        for (int j = 0; j < i && sym; j++)
            if (a[i][j] != a[j][i]) sym = false;
    
    cout << maxVal << endl << (sym ? "YES" : "NO");
    for (int i = 0; i < n; i++) delete[] a[i];
    delete[] a;
    return 0;
}